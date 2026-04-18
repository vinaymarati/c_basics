/*********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include<semaphore.h>


char buff[5];

sem_t p,c;

void *producer_thread(void *arg);

void *consumer_thread(void *arg);

int main()
{

	int ret;
	pthread_t a,b;

	void *thread_result;

	//initialization of seamphore variables p,c
	sem_init(&p,0,1);
	sem_init(&c,0,0);

	ret=pthread_create(&a,NULL,producer_thread,NULL);
	if(ret!=0)
	{
		perror("thread creation fail\n");
	}
	
	ret=pthread_create(&b,NULL,consumer_thread,NULL);
	
	if(ret!=0)
	{
		perror("Thread creation fail for consumer thread\n");
	}	
	while(1);
	/*printf("wait for pthread_join\n");
	
	ret=pthread_join(a,&thread_result);
	if(ret!=0)
	{
		perror("producer error:");	
		exit(EXIT_FAILURE);
	}
		
	ret=pthread_join(b,&thread_result);
	if(ret!=0)
	{
		perror("consumer error: ");
		exit(EXIT_FAILURE);

	}
		printf("Thread joined");
		exit(EXIT_SUCCESS);
*/
return 0;
	
} 

void *producer_thread(void *arg)
{
	char ch='A';
	int i=0;
	while(1)
	{
		//room is unlocked when entered ,room is lock
		sem_wait(&p);
		for(i=0;i<5;i++)
		{
			buff[i]=ch;
			ch++;
		}
		ch='A';
		printf("producer:%s\n",buff);
		
		//here room is unlocked consumer can enter
		sem_post(&c);
		
	}
	pthread_exit("exit");
}

void *consumer_thread(void *arg)
{
	int i=0;;
	char temp[5];
	while(1)
	{
	
		//here room is unlocked,when consumer entered room is locked
		sem_wait(&c);
		for(i=0;i<5;i++)
		{
			temp[i]=buff[i];
		}
		
		
		printf("consumer:%s\n",temp);
		
		//room is unlocked ,producer can enter the room
		sem_post(&p);
        
	
	}
	pthread_exit("exit");
}
