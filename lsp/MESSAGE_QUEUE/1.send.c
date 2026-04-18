/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/msg.h>

#define MAX_TEXT 512

#define KEY  456

struct my_msg_st{
	long int type;
	char some_text[10];
	
};


int main()
{
	
	struct my_msg_st some_data;
	int msgid,n;
	char buffer[20];
	

	msgid=msgget(KEY,0666 | IPC_CREAT);
	if(msgid<0)
	{
		perror("ERROR: ");
		exit(1);
	}
	some_data.type=123;
	
	strcpy(some_data.some_text,"HELLO VINAY");
	if((n=msgsnd(msgid,&some_data,sizeof(some_data),0))<0)
	{
		perror("Error for sending data: ");
		exit(1);
	}
	
	
	
   return 0;
}

