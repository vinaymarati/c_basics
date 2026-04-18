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

void consumer(void);
void consumer_handler(int sig);	

int main()
{

	consumer();

	return 0;
}

void consumer(void)
{
	sleep(1);
	signal(SIGUSR2,consumer_handler);	
	kill(getppid(),SIGUSR1);	
	printf("Signal raised to producer\n");
	while(1)
	{
		pause();
	}
}
void  consumer_handler(int sig)
{	
	
	int shmid;
	char *msg;
	shmid=shmget(KEY,300,0666|IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmid error: ");
		exit(1);	
	}
	
	msg=shmat(shmid,0,0);

	printf("%s\n",msg);
	printf("Data Read successfully\n");
	//shmdt(msg);
	kill(getppid(),SIGUSR1);		
}
	
