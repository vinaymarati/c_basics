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

void *thread_function(void *arg);


char message[]="Hello World";

int main()
{
	int res;
	pthread_t a_thread;
	
	void *thread_result;
	
	res=pthread_create(&a_thread,NULL,thread_function,(void *)message);

if(res!=0)
{
	perror("Thread creation fail");
	exit(1);
}

printf("Waiting for thread to finish...\n");

res=pthread_join(a_thread,&thread_result);
if(res!=0)
{
	perror("Thread join failed");
	exit(1);

}
	
printf("Thread joined,it returned %s\n",(char *)thread_result);
printf("Message is now %s\n",message);
exit(0);

}

void *thread_function(void *arg)
{
	printf("Thread_function is running.Argument was %s\n",(char *)arg);
	sleep(3);
	strcpy(message,"Bye!");
	pthread_exit("Thank you for the CPU time");
}

