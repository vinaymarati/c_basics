/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include <signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

#define KEY 20
void producer(void);
void consumer(void);
void producer_handler(int sig);
void consumer_handler(int sig);	

int shmid;
char *msg;

pid_t fork_id;
int main()
{
	
	shmid=shmget(KEY,300,0666|IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmid error: ");
		exit(1);	
	}
	
	msg=shmat(shmid,0,0);

	if(msg<0)
	{
		perror("shmat fail: ");
		exit(1);
	}

	fork_id=fork();
	
	if(fork_id<0)
	{
		perror("fork fails: ");
		exit(1);
	}
	
	else if(fork_id==0)
	{
		consumer();	
	}
	else
	{	
		producer();
	}
	
   return 0;
}
void  producer(void)
{
	signal(SIGUSR1,producer_handler);
	while(1)
	{
		pause();
	}
}
void consumer(void)
{
	sleep(1);
	signal(SIGUSR2,consumer_handler);
	
	kill(getppid(),SIGUSR1);	
	printf("Signal raised to producer*******************\n");
	while(1)
	{
		pause();
	}
}
void producer_handler(int sig)
{
	printf("Enter the data to the memory \n");
	fgets(msg,1024,stdin);
	printf("Data successfully, written\n");
	//shmdt(msg);
	kill(fork_id,SIGUSR2);		
}

void  consumer_handler(int sig)
{
	printf("%s\n",msg);
	printf("Data Read successfully\n");
	//shmdt(msg);
	kill(getppid(),SIGUSR1);		
}
	
