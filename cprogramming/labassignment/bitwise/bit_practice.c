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
	printf("Enter the hexa number: ");
	scanf("%x",&a);
	printf("left shift:%d\n",(a+1)<<2);
	printf("right shift: %d\n",(a+2)>>1);
	printf("negation: %d\n",(a+3));
	a <<= 1;
	printf("%d",a);
   return 0;
}

