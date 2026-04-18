/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/msg.h>
    
# define KEY	456

   struct mesg{
   long int type;
	char msg[20];
    };

int main()
{
	struct mesg message;
	int msgid, n;
	
	//it will return the msgid
	msgid = msgget(KEY, 0666);

	if (msgid < 0) {
		perror("msgget");
		exit(0);
	}
	
	if ((n = msgctl(msgid,IPC_RMID, 0)) < 0) 
	{
	
		perror("msgctl");
		exit(0);
	}
	printf("%d\n",n);
	printf("456 msg removed\n");
}
