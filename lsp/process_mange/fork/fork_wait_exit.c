/********************************************************************

*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 07-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int count=0;
int main()
{
	pid_t pid;
	char *message;
	int n;
	int exit_code;
	
	printf("fork program starting\n");
	pid=fork();
	switch(pid)
	{
		
		case -1:
				perror("fork failed:");
				exit(1);
		case 0:
				printf("child pid %d : ppid: %d \n",getpid(),getppid());
				count=count+1;
				printf("count %d\n",count);	
				message="This is the child";
				n=5;
				exit_code=37;
				break;
		default:
				printf("parent pid %d\n",getpid());
				count=count+2;
				printf("count parent %d\n",count);
				message="THIS IS PARENT";
				n=3;
				exit_code=0;
				break;
	}

	for(;n>0;n--)
	{
		puts(message);
		sleep(1);
	}
	
	if(pid!=0)
	{
		int stat_val;
		pid_t child_pid;
		
		child_pid=wait(&stat_val);
		printf("Child has finished:PID = %d\n",child_pid);
		if(WIFEXITED(stat_val))
		{
			printf("Child exicted with code %d\n",WEXITSTATUS(stat_val));
		}
		else
		{
			printf("Child terminated abnormally\n");
		}

	}
		exit(exit_code);


}

