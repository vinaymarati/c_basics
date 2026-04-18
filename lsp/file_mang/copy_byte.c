/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
********************************************************************/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{

	int in_fd,out_fd;
	char byte;
	int nread;
	in_fd=open(argv[1],O_RDONLY);
	out_fd=open(argv[2],O_WRONLY|O_CREAT,S_IRWXU);
	while((nread=read(in_fd,&byte,1))>0)
	{
		write(out_fd,&byte,nread);
		
	}
	close(in_fd);
	close(out_fd);
 return 0;
}

