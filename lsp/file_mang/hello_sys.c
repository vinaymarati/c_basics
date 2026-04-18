/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 30-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <unistd.h>
#include <stdio.h>
int main()
{
	
	//Hello world using system programming
	char buff[50];
	int ret;
	ret=read(0,buff,6);
	if(ret==0)
	{
		write(1,"End of file",12);
	}
	else if(ret==6)
	{
		write(1,buff,7);
	}
	write(1,"\nVinay Marati",13);
	return 0;
	
   return 0;
}

