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
void *thread_2(void *arg);

char message[]="VIN";

int main()
{
	pthread_t a_thread;
	pthread_t b_thread;
	void *thread_result;
	
	pthread_create(&a_thread,NULL,thread_1,(void*)message);
	pthread_create(&b_thread,NULL,thread_2,(void*)message);
	while(1)
	{
		printf("MAIN THREAD\n");

	}
    return 0;
}


void *thread_1(void *arg)
{
	while(1)
	printf("Recevied Thread_1:%s\n",(char*)arg);
	//pthread_exit("Completed thread_1");
}


void *thread_2(void *arg)
{
	while(1)
	printf("*************Thread_2:%s\n",(char*)arg);
	//pthread_exit(" thread_2");
}
