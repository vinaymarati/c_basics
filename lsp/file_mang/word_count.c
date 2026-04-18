/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc,char *argv[])
{
	int count_lines=0,count=0,words=0,chars=0,in_fd;
	char byte;
	in_fd=open(argv[1],O_RDONLY);
	if(in_fd<0)
	{
		perror("Error fail: ");
		exit(0);
	}	
	while((read(in_fd,&byte,1))!=0)
	{
		if(byte=='\n')
		{
			count_lines++;
		}
		if(byte=='\n' || byte==' ' || byte=='_'|| byte=='	')
		{
			count=0;
		}
		else if(count==0)
		{

			words++;
			count=1;
		}
		chars++;
	}
	printf("no of lines: %d\n",count_lines);
	printf("no of words: %d\n",words);
	printf("no of characters: %d",chars);
	

   return 0;
}

