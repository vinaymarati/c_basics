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


char buff[26];

sem_t full,empty;

void *producer_thread(void *arg);

void *consumer_thread(void *arg);

int main()
{

	int ret;
	pthread_t a,b;

	void *thread_result;

	//initialization of seamphore variables p,c
	sem_init(&full,0,0);
	sem_init(&empty,0,26);

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
	int in=0;
	while(1)
	{
		/*here empty= 26 untill it fill the 26 characters in the buffer
		 consumer will wait */
		sem_wait(&empty);
		buff[in]=ch;
		in=(in+1)%26;
		ch++;
		
		if(in==0)
		{
			ch='A';
			printf("producer %s\n",buff);	
		}
		
		sem_post(&full);
		
	}
	pthread_exit("exit");
}

void *consumer_thread(void *arg)
{
	int out=0;
	char temp[27];
	while(1)
	{
	
		/*here full is fill with 26 it will decrement by 1 and store the value in buff
		and increment empty by 1 till it reach to 26
		*/
		sem_wait(&full);
		
		temp[out]=buff[out];
	
		out=(out+1)%26;	
		if(out==0)
		{
			temp[26]='\0';
			printf("consumer %s\n",temp);
		}
		
		//room is unlocked ,producer can enter the room 
		sem_post(&empty);
       
	
	}
	pthread_exit("exit");
}
