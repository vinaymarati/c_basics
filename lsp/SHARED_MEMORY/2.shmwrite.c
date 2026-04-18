
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
#include<sys/ipc.h>
#include<sys/shm.h>

#define KEY 10

int main()
{
	int shmid;
	char *msg;
	
	shmid=shmget(KEY,1024,0666|IPC_CREAT);
	
	if(shmid==-1)
	{
		perror("shmget");
		exit(1);
	}
	
	msg=shmat(shmid,0,0);
	
	printf("Enter the data you want to write into shared memory\n");

	fgets(msg,1024,stdin);
	
	printf("Data successfully written\n");
	
	getchar();
	shmdt(msg);

   return 0;
}

