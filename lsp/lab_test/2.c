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

void my_exit(void);


int main()
{
	my_exit();
	
   return 0;
}


void my_exit(void)
{
	int ret,fd;
	char ch='1';

	fd=open("abc",O_WRONLY);
	ret=write(fd,&ch,1);
	if(ret<0)
	{
		perror("fail");
	}
}
