/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/input.h>
#include <stdlib.h>

int main()
{
	fd_set read_fileset; 
	struct input_event ev;
	int fd1,fd2,ret_select,ret;
	char buff[4096];
	
	fd1=open("/dev/input/event6",O_RDONLY);     //mouse
	if(fd1<0)
	{
		perror("File error: ");
	
	}
	fd2=open("/dev/input/event2",O_RDONLY);    //keyboard
	if(fd2<0)
	{
		perror("File error: ");	
	}
	
	/*initially makes as zero files */
	
	FD_ZERO(&read_fileset);  //clear all the fields
	
	printf("Max. no of fd's:%d\n",FD_SETSIZE);
	
	while(1)
	{
		/* add our file discriptors */
		
		FD_SET(fd1,&read_fileset);
		FD_SET(fd2,&read_fileset);
	
		/*first argument tells the no fd's ,second arg tells how many file discriptors set,
		all others if we need we should pass,otherwise send NULL */
		
		ret_select=select(FD_SETSIZE,&read_fileset,NULL,NULL,0);
		printf("ret fd:%d\n",ret_select);
		if(ret<0)
		{
			printf("Select is falied\n");
			return -1;
		}
		
		/*Mouse data event6 */
		if(FD_ISSET(fd1,&read_fileset))
		{
			printf("Data is avilable on mouse event6\n");
			ret=read(fd1,&ev,sizeof(struct input_event));
			printf("ret=%d ev.type:%d ev.code:%d ev.value%d\n",ret,ev.type,ev.code,ev.value);
		}
		
		/*keyboard event2 */
		
		if(FD_ISSET(fd2,&read_fileset))
		{
			printf("Keyboard event\n");
			ret=read(fd2,&ev,sizeof(struct input_event));
			printf("ret:%d ev.type:%d ev.code:%d ev.value:%d\n",ret,ev.type,ev.code,ev.value);
		}	
	}
   return 0;
}


