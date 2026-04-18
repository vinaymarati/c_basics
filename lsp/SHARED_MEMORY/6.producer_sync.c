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
void producer_handler(int sig);	


pid_t fork_id;
char *msg;
int main(int argc,char *argv[])
{
	
	char *newargv[]={NULL};
	char *newenviron[]={NULL};
	int shmid;	
	newargv[0]=argv[1];
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
		//consumer();
		execve(argv[1],newargv,	newenviron);
	}
	else
	{	
		producer();
	}
	
   return 0;
}
void  producer(void)
{
	printf("parent id: %d\n",fork_id);
	signal(SIGUSR1,producer_handler);
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

