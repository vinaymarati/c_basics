/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 06-04-26
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

#include<sys/mman.h>

int main(int argc,char *argv[])
{
	struct stat temp;                       //it stores the file information
	int fd_src,fd_des,i,ret_stat;
	char *memptr,*temp_memptr ;                       //mmap pointer it holds the address

	char *wr_memptr,*temp_wr_memptr;
	
	fd_src=open(argv[1],O_RDONLY);         //source file 
	if(fd_src<0)
	{	
		perror("File error1: ");
		return 0;
	}
	
	ret_stat=fstat(fd_src,&temp);          //fstat reads the file information and stores in temp variable ,it gives file  size also
	
	fd_des=open(argv[2],O_RDWR|O_CREAT,S_IRUSR|S_IWUSR);             //destination file
	
	if(fd_des<0)
	{
		perror("File error2: ");
		return 0;
	}
	ftruncate(fd_des,temp.st_size);
	
	/* it map the file to running memory and returns the base addres */
	memptr=(char *)mmap(NULL,temp.st_size,PROT_READ,MAP_PRIVATE,fd_src,0); 
	if(memptr==NULL)
	{
		perror("mmap error: ");
	}
	
	temp_memptr=memptr ;                 //stores the memptr value
	
	printf("memptr: %p\n",memptr);
	
	
	wr_memptr=(char *)mmap(NULL,temp.st_size,PROT_WRITE,MAP_SHARED,fd_des,0);
	if(wr_memptr==NULL)
	{
		perror("mmap error: ");
	}
	temp_wr_memptr=wr_memptr;
	
	printf("wr_memptr:%p\n",wr_memptr);
	
	for(i=0;i<temp.st_size;i++)
	{
		*(wr_memptr+i)=*(memptr+i);
	
	}
	
   return 0;
}

