/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include<stdlib.h>
#include <stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

#define KEY  20

int main()
{	
	int shmid;
	char *msg;
	char ch[10]="VINAY";
	
	shmid=shmget(KEY,1024,0);
	if(shmid<0)
	{
		perror("shmget");
		exit(1);
	}
	
	msg=shmat(shmid,0,0);
	
	printf("Data Written in the shared memory is:%s\n",msg);
	
	getchar();
	shmdt(msg);

   return 0;
}

