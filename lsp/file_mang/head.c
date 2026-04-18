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
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int ato_i(char str[]);
//variable count the no of lines
int count_lines;
int main(int arg,char *argv[])
{
	char byte;
	int in_fd;
	if(arg==3)
	{
	//read the string from argv array to convert the string to integer i.e how many lines we waant to print
	int head=ato_i(argv[1]+1);
	printf("%d",head);
	in_fd=open(argv[2],O_RDONLY);

	//if file is not open it returns negative value otherwise next statement
	if(in_fd<0)
	{
		perror("Error file: ");
		exit(0);
	}
	//check the no of lines in the file if we found new line it increments the count_lines
	//it will check the every byte till end of the file
	while((read(in_fd,&byte,1)) !=0)
	{
		if(byte=='\n')
			count_lines++;
	}	
	//here program counter reaches to the end of the file we need close the file beacuse if want to 
	//read the data from the file we are not able to read the data beacuse the program counter reaches to end of file
	//so again we need to open file
	close(in_fd);
	//to open the file we need to pass the arguments path as filename and flags are permission read/write
	in_fd=open(argv[2],O_RDONLY);
	
	//read the every byte from the file
		while((read(in_fd,&byte,1))!=0)	
		{
			
			if(byte=='\n')
			{
				head--;
			}
		//print the every byte to monitor
			write(1,&byte,1);
			if(head==0)
			{
				close(in_fd);
				exit(0);
			}		
		
		}
		
        }
	else
	{
		
		in_fd=open(argv[1],O_RDONLY);
		int count=10;
		while((read(in_fd,&byte,1))!=0 && count !=0)	
		{
			if(byte=='\n')
			{
				count--;	
			}
			write(1,&byte,1);
			if(count==0)
			{	
				close(in_fd);
				exit(0);
			}		

		}
	}
	//printf("\n count lines :%d",count_lines);
   return 0;
}

//function converts  the character to integer value and return integer value
int ato_i(char str[])
{
	int i=0,j=10,sum=0;
	while(str[i])
	{
		sum=sum*j+str[i]-'0';
		i++;
	}
	return sum;
}
