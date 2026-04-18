/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

//program to read monitor resolution

//sudo ./a.out /dev/fb0/

//path for header file vim /usr/include/linux/fb.h

#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/fb.h>
#include <sys/ioctl.h>


int main(int argc,char *argv[])
{
	int fd,retfd;
	char buff[4096];
	
	int val;
	char name[256];
	struct fb_var_screeninfo temp;
	fd=open(argv[1],O_RDONLY);
	
	if(fd<0)
	{
		perror("Open fails: ");
		return -1;
	}
	ioctl(fd,FBIOGET_VSCREENINFO,&temp);
	printf("xres:%d yres:%d bits_per_pixel:%d\n",temp.xres,temp.yres,temp.bits_per_pixel);
	
   return 0;
}

