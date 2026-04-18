/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
	int fd,pos,i=0,nread;
	char ch;
	char arr[]="KERNEL";
	fd=open(argv[1],O_RDONLY|O_WRONLY);
	if(fd<0)
	{
		perror("ERROR FILE:");
		exit(0);
	}
	//moving the pointer to the 5th position from the begining of the file
	pos=lseek(fd,5,SEEK_SET);
	if(pos<0)
	{
		perror("error file: ");
		exit(0);
	}
	printf("current position:%d\n",pos);
	
	//moving the pointer to the next offset(2) from current pointer position  
	//pos=lseek(fd,2,SEEK_CUR);
	
	//moving the pointer to the next offset from the end of the file 
	//pos=lseek(fd,5,SEEK_END);
	
	while(arr[i]!='\0')
	{
		write(fd,&arr[i],1);
		i++;
	}
	
   return 0;
}

