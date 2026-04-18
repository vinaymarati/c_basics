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
#include<linux/input.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	//fd_set read_fileset;
	//struct input_event ev;
	char buff[4096];
	int fd,ret;
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("Error file: ");
		exit(0);
	}
	ret=read(fd,buff,4096);
	if(ret<0)
	{
		perror("Read file error: ");
	}
	//write(1,buff,4096);
	
	
   return 0;
}

