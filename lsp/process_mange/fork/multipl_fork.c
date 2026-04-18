/********************************************************************
i
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
int main()
{
	
	pid_t pid;
	char *message;
	int n;
	printf("WELCOME \n ");
	fork();
	fork();
  pid=fork();
	switch(pid)
	{
		case -1: perror("fork error");
				exit(0);
		case 0:
				message="child";
				n=5;
				break;
		default:
				message="parent";
				n=3;
				break;
	}
	
	for(;n>0;n--)
	{
		puts(message);
	}

   return 0;
}

