/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 08-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_handler(int sig)
{
	printf("Default process is changed\n");
}



int main()
{
	

	signal(SIGINT,my_handler);
	
	printf("Entry \n");
	
	
		
	while(1)
	{
		
		printf("hello Vinay\n");
		sleep(1);
	}
	
   return 0;
}

