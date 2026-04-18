/********************************************************************

*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

#include <stdio.h>

int main(int argc,char *argv[])
{
	char buff[50];
	int fd,nread;
	fd=open(argv[1],O_RDONLY);
	printf("%d\n",fd);
	if(fd<0)
	{
		perror("open fail:");
	}
	nread=read(fd,buff,20);
	if(nread<0)
	{
		perror("read fail:");
	}
	while(0!=nread)
	{
		write(1,buff,nread);
		nread=read(fd,buff,20);
	}
	close(fd);
	

   return 0;
}

