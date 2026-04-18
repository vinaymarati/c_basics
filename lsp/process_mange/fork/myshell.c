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

void mysystem(char *s);
void myshell();
int main()
{
	
	while(1)
	{

		myshell();	
		
	}

return 0;
	
}

void mysystem(char *s)
{
	pid_t pid;
	int exit_code;

	pid=fork();
	switch(pid)
	{

		case -1:
			perror("fork failed:");
			exit(1);
	
		case 0:	
			execl("/bin/sh","sh","-c",s,NULL);
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
	
	}
		exit(exit_code);

}

void myshell()
{
	pid_t pid;
	int exit_code;
	pid=fork();
	char arr[50];
		switch(pid)
		{
		
			case -1:
					perror("for failed1: ");
					exit(1);
			case 0:
					printf("vm$:");
					
					scanf("%[^\n]s",arr);
					mysystem(arr);
					
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
		
		}

}
