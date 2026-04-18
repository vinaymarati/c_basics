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
#include <stdio.h>

static int alarm_fired;

void ding(int sig)
{
	alarm_fired=1;
}

int main()
{
	
	pid_t pid;
	
	printf("ALARAM APPLICATION STARTING\n");
	
	pid=fork();
	
	switch(pid)
	{	
		/*failure */
		case -1:
				perror("fork failed");
				exit(1);
		case 0:
				/*child */
				sleep(5);
				kill(getppid(),SIGALRM);
				exit(0);
		
	}
	
	/* if we get here we are the parent process */
	printf("waiting for alarm to go off\n");
	
	/*initialization of signal SIGALRM ,user defined handler,
	it will wait for raise of signal of SIGALRM ,if ocuurs goes to user defined handler */
	 signal(SIGALRM, ding);
	
	//pause it will wait for particular signal raise
	pause();
	
	if(alarm_fired)
		printf("Ding!\n");
	
	printf("done\n");
	exit(0);
	
	

   return 0;
}

