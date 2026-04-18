/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define KEY 20

int main()
{
	int shmid;
	
	shmid=shmget(KEY,0,0);
	if(shmid==-1)
	{
		perror("shmid");
		exit(1);
	}

	if(shmctl(shmid,IPC_RMID,0)==-1)
	{
		perror("shmctl");
		exit(1);
	}
	
	printf("Shared memory successfully removed\n");
   return 0;
}

