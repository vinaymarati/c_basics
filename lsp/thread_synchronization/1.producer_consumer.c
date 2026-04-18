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

int count=0;
char buff[5];
char temp[5];
void *producer_thread(void *arg);

void *consumer_thread(void *arg);

int main()
{

	int ret;
	pthread_t a,b;

	void *thread_result;

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
	int in=0;
	char ch='A';
	
	while(1)
	{
		while(count==5);
		buff[in]=ch;
		in=(in+1)%5;
		ch++;
		if(in==0)
		{
			ch='A';
			printf("producer:%s\n",buff);
		}
	count++;
	}
	pthread_exit("exit");
}

void *consumer_thread(void *arg)
{
	int out=0;
	//char temp[5];
	while(1)
	{
		while(count==0);
		temp[out]=buff[out];
		out=(out+1)%5;
		count--;
		if(out==0)
		
		printf("consumer:%s\n",temp);
        //count--;
	
	}
	pthread_exit("exit");
}
