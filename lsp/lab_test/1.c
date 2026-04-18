/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 11-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

void my_wait(void);


int main(int argc,char *argv[])
{
	

	my_wait();
	
   return 0;
}


void my_wait(void)
{
	int ret,fd,ret_1;
	char ch;

	fd=open("abc",O_RDWR);
	while(1)
	{
		ret_1=lseek(fd,0,SEEK_SET);
		ret=read(fd,&ch,1);
		
		if(ret<0)
		{
			perror("fail");
		}
		write(1,&ch,1);
		if(ch=='1')
		{
			/*char a='0';
		    int r;
			lseek(fd,0,SEEK_SET);
			r=write(fd,&a,1);
			close(fd);
			if(r<0);
			{
				perror("write error");
			}*/

			exit(0);
		}
	}
}
