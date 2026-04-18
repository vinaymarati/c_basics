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


int main(int argc,char *argv[])
{
	
	int fd,ret;
	char name[256];
	
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("Open fails");
		return -1;
	}
	
	ret=ioctl(fd,EVIOCGNAME(sizeof(name)),name);
	if(ret<0)
	{

		perror("ioctl fails");
		return -1;
	}
	
	printf("Input device name:  %s\n",name);
   return 0;
}

