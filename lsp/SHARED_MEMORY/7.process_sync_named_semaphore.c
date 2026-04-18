/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

//to see  named semaphore variablesin $ls /dev/shm

#include <stdio.h>
#include <stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>           
#include <sys/stat.h>      
#include <semaphore.h>
#include<signal.h>



#define KEY 20
void producer(void);
void consumer(void);	
void terminate(int sig);
sem_t *prod_lock,*cons_lock;

int a,b;

int shmid;
char *msg;

pid_t fork_id;
int main()
{

	signal(SIGINT,terminate);
	
	
	prod_lock=sem_open("producer1",O_CREAT,0666,1);

	if(prod_lock==NULL)
	{
		perror("semaphore1");
		exit(0);
	}
	cons_lock=sem_open("consumer1",O_CREAT,0666,0);

	if(cons_lock==NULL)
	{
		perror("semaphore2");
		exit(1);
	}

	sem_getvalue(prod_lock,&a);
	sem_getvalue(cons_lock,&b);

	printf("prod:%d   cons:%d\n",a,b);

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
	while(1)
	{
		sem_wait(prod_lock);
		printf("Enter the data to the memory \n");
		fgets(msg,1024,stdin);
		printf("Data successfully, written\n");
		sem_post(cons_lock);
	}
}
void consumer(void)
{
	while(1)
	{
		sem_wait(cons_lock);
		printf(" %s\n",msg);
		printf("Data Read successfully\n");
		sem_post(prod_lock);	
	}
}
	

void terminate(int sig)
{
	printf("I got a signal for terminate, for terminate CTRL+C\n");
	sem_unlink("producer1");
	sem_unlink("consumer1");
	signal(SIGINT,SIG_DFL);
}

