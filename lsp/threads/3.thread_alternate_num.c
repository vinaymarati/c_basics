/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 08-04-26
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


void *thread_1(void *arg);

int run_row=1;

int main()
{
	pthread_t a_thread;
	
	int count1=0;
	
	pthread_create(&a_thread,NULL,thread_1,(void *)&run_row);
	
	while(count1++<20)
	{
		if(run_row==1)
		{
			printf("1\n");
			run_row=2;
			
		}
		else
		{
			sleep(1);
		}
	}



   return 0;
}

void *thread_1(void *arg)
{

	int count2=0;
	while(count2++<20)
	{
		if(run_row==2)
		{
			printf("2\n");
			run_row=1;
		}
		else
		{
		sleep(1);
		}
		
	}	
}
