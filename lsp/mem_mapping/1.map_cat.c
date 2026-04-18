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
	int fd,ret_stat,i;
	
	//struct stat variable store the file inforamtion 
	struct stat temp;

	//below memptr ,temp_ptr are pointer variable holds the address of char type
	char *memptr,*temp_ptr;

	//it open the files corresponding path ,it returns file descriptor
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("file open error:");
		return 0;
	}	
	
	//fstat system call stores the file information in temp variable return success/fail in ret
	ret_stat=fstat(fd,&temp);

	printf("size of %s: %ld",argv[1],temp.st_size);
	
	//mmap map the file to running allocated memory and return the base address
	memptr= (char *)mmap(NULL,temp.st_size,PROT_READ,MAP_PRIVATE,fd,0);
	
	temp_ptr=memptr;
	for(i=0;i<temp.st_size;i++)
	{	
		//char ch;
		//ch=*(memptr+i);
		//printf("%c",*(memptr+i));             //with printf libraray  
		write(1,memptr,1);                        //with system call write   
		memptr++;      
	}
	
	//munmap system call release the memory
	munmap(memptr,temp.st_size);
	
	
   return 0;
}

