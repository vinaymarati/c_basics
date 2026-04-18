/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <string.h>
#include <errno.h>
#include <unistd.h>

#define MAX_TEXT 512

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/msg.h>

#define KEY	456

struct mesg{
  long int type;
    char msg[20];
   };

int main()
{  
	struct  mesg message;
	int qid,n;
	qid=msgget(456,0666);
	if(qid<0)
	{ 
		perror("msgget");
		exit(0);
        }			// Any first message in the msg queue
	if((n=msgrcv(qid,&message,sizeof(message),0,0))<0)
  	{ 	
		perror("msgrcv");
		exit(0);
    	}
	printf("msg is:%s\n",message.msg);
	printf("msg typ is %ld\n",message.type);
}
 
