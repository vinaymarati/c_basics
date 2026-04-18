/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 08-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
#include <signal.h>
#include <stdio.h>
#include<unistd.h>


void my_handler(int sig)
{
	/*first signal occured it will printf the first change,nxt time if signal occured 
	it will terminate the process ,we are initialzing the default features */

	printf("first changed\n");
	signal(SIGINT, SIG_DFL);		
	
}

int main()
{
	
	//first the signal initialization is done 
	signal(SIGINT,my_handler);
	printf("Entry\n");
	

	/*when the first signal interrupt is occured it will go to handler ,in that handler we have changed the signal
	to the default features*/

	while(1)
	{
		printf("Hello Vinay\n");
		sleep(1);
		
	}
   return 0;
}

