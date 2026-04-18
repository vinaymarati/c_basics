/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 21-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int a;
	printf("Enter the hexadecimal number: \n");
	scanf("%x",&a);
	if(a & 0x1)
	{
		printf("Odd number\n");	
	}
	else
	{
		printf("Even Number\n");
	}
   return 0;
}

