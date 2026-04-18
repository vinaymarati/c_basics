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
void mysystem();
int main()
{
	pid_t pid;
	char s[50];
	int n;
//	scanf("%[^\n]s",s);	
	mysystem();
	

   return 0;
}

void mysystem()
{
	int exit_code;
	pid_t pid;
	pid=fork();
	switch(pid)
	{
		case -1:
				perror("fork error:");
				exit(1);
		case 0:
				char s[50];
				scanf("%[^\n]s",s);
				execl("/bash/sh","sh","-c",s,NULL);
				sleep(1);
				exit_code=37;
				break;
		default:
				exit_code=0;
			   break;		
				
	}
	if(pid!=0)
	{
		int stat_val;
		pid_t child_pid;

		child_pid=wait(&stat_val);
		//printf("Child has finished:PID = %d\n",child_pid);
	/*	if(WIFEXITED(stat_val))
		{
			printf("Child exicted with code %d\n",WEXITSTATUS(stat_val));
		}
		else
		{
			printf("Child terminated abnormally\n");
		}*/

	}
	exit(exit_code);

}
