/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : calculation based on given character
*Sample Input         : Enter the Numbers20 40
                     Enter the character*
*Sample Output        : Multiplication of a: 20 * b: 40 = 800
*
*************************************************************************/


#include <stdio.h>
int a,b;
char c;
int main()
{
	printf("Enter the Numbers");
	scanf("%d%d",&a,&b);
	printf("Enter the character");
	scanf(" %c",&c);
	if('+'==c)
	{	printf("Addition of a: %d + b: %d = %d",a,b,a+b);
	}
	else if('-'==c)
	{	printf("Subtraction of a: %d - b: %d = %d",a,b,a-b);
	}
	else if('*'==c)
	{
		printf("Multiplication of a: %d * b: %d = %d",a,b,a*b);
	}
	else if('/'==c)
	{
		printf("Division of a: %d / b: %d = %d",a,b,a/b);
	}

    return 0;
}

