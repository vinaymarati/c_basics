/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	
	int a=0x00A;
	char *p=(char *)&a;
	if(*p==0xA)
	{
		printf("Litten Endian");
	} 
	else
	{
		printf("Big Endian");
	}
   return 0;
}

