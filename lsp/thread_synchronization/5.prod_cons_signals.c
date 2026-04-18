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
#include<signal.h>


char buff[26];

//sem_t full,empty;

void *producer_thread(void *arg);

void *consumer_thread(void *arg);
void producer_handler(int sig);
void consumer_handler(int sig);
pthread_t a_producer,b_consumer;

int main()
{

	int ret;
	//pthread_t a_producer,b_consumer
	
	void *thread_result;

	//initialization of seamphore variables p,c
	//sem_init(&full,0,0);
	//sem_init(&empty,0,26);

	ret=pthread_create(&a_producer,NULL,producer_thread,NULL);
	if(ret!=0)
	{
		perror("thread creation fail\n");
	}
	
	ret=pthread_create(&b_consumer,NULL,consumer_thread,NULL);
	
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
	signal(SIGUSR1,producer_handler);
	while(1)
	{
		pause();
			
	}
	pthread_exit("exit");
}


void producer_handler(int sig)
{
			char ch='A';
			int i=0;
		
				for(i=0;i<26;i++)
				{
					buff[i]=ch;
					ch++;
				}
				
				printf("producer:*******************%s\n",buff);
				ch='A';
				pthread_kill(b_consumer,SIGUSR2);
		
}
void *consumer_thread(void *arg)
{
	signal(SIGUSR2,consumer_handler);	

	pthread_kill(a_producer,SIGUSR1);
	while(1)
	{
		pause();
	}
}

void consumer_handler(int sig)
{
	char temp[27];
	int i=0;
		for(i=0;i<26;i++)
		{
			temp[i]=buff[i];
			
		}	
		printf("counsumer----%s\n",temp);
     	pthread_kill(a_producer,SIGUSR1);
	


}


