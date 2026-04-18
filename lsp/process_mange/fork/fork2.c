/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 07-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

//program to check the how manny running process 


/*    SAMPLE OUTPUT
fork program starting
HI VINAY 
HI VINAY 
Parent pid:5145
Parent ppid:4793
This is the parent
Child PID:5146
child PPID:5145
This is the child
This is the parent
This is the child
This is the child
This is the parent
This is the child
km@km:~/lsp/process_mange/fork$ This is the child

*/


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

	
	pid_t pid;
	char *message;
	int n;
	
	printf("fork program starting\n");
	pid=fork();
	printf("HI VINAY \n");
	switch(pid)
	{
		case -1:
		perror("fork failed");
		exit(1);
		case 0:
			printf("Child PID:%d\n",getpid());
			printf("child PPID:%d\n",getppid());
			message="This is the child";
			n=5;
			break;
		default:
			printf("Parent pid:%d\n",getpid());
			printf("Parent ppid:%d\n",getppid());
			message="This is the parent";
			n=3;
			break;
	}
	
	for(;n>0;n--)	
	{
		puts(message);
		
		//because odf sleep it switch from one process to another process,
		//if sleep is not there total process will execute and switch to another process
		sleep(1);
	}
   exit(0);
}



