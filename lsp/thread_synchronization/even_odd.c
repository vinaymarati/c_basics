/*********************************************************************

*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-04-26
*Program              :
*Sample Input         :
*Sample Output        :
**************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

int count=0;
//char buff[5];
void *even_thread(void *arg);

void *odd_thread(void *arg);

int main()
{

	int ret;
	pthread_t even,odd;

	void *thread_result;

	ret=pthread_create(&even,NULL,even_thread,NULL);
	if(ret!=0)
	{
		perror("thread creation fail\n");
	}
	
	ret=pthread_create(&odd,NULL,odd_thread,NULL);
	
	if(ret!=0)
	{
		perror("Thread creation fail for consumer thread\n");
	}	
	while(count<20)
	{
	;
	}

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

void *even_thread(void *arg)
{

	while(count<20)
	{
		if(count%2==0)
		{
			printf("even %d\n",count);
			count++;
		}

	}
	pthread_exit("exit");
}

void *odd_thread(void *arg)
{
	while(count<20)
	{
		if(count%2!=0)
		{
		
		printf("odd %d\n",count);
		count++;
	
		}
	}
	pthread_exit("exit");
}
