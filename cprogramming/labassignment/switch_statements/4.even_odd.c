/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Given Number is Even or Odd
*Sample Input         : Enter the Number5
*Sample Output        : The number is odd
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int a;
	printf("Enter the Number");
	scanf("%d",&a);
	switch(a%2==0)
	{	
		case 1:printf("It is even Number");
			break;	
		default:printf("The number is odd");
			break;
	}


   return 0;
}

