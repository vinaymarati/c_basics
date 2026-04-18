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
int count_lines;
int tail_count=0;
int main(int arg,char *argv[])
{
	char byte;
	int in_fd;
	if(arg==3)
	{
	int tail=ato_i(argv[1]);
	printf("%d",tail);
	in_fd=open(argv[2],O_RDONLY);

	if(in_fd<0)
	{
		perror("Error file: ");
		exit(0);
	}
	while((read(in_fd,&byte,1)) !=0)
	{
		if(byte=='\n')
			count_lines++;
	}	
	close(in_fd);
	in_fd=open(argv[2],O_RDONLY);
 	
		count_lines=count_lines-tail;
		while((read(in_fd,&byte,1))!=0)	
		{
			
			if(byte=='\n')
			{
				tail_count++;	
			}
			if(tail_count>=count_lines)
			{
				write(1,&byte,1);
				
			}
			
		}
		close(in_fd);

		
        }
	else
	{
		in_fd=open(argv[1],O_RDONLY);
		int count=0,tail_count=0;
		
		while((read(in_fd,&byte,1))!=0)
		{
			if(byte=='\n')
			   count_lines++;
		}
		count=count_lines-10;
		close(in_fd);
		in_fd=open(argv[1],O_RDONLY);
		while((read(in_fd,&byte,1))!=0 && count !=0)	
		{
		
			if(byte=='\n')
			{
				tail_count++;	
			}
			if(tail_count>=count)
			{
				write(1,&byte,1);		
			}
		}
		close(in_fd);
	}
	
	printf("\n count lines :%d",count_lines);
	
   return 0;
}

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


