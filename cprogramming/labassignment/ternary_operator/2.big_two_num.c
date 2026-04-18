/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              : Biggest of two numbers
*Sample Input         : Enter the two numbers 6 3
*Sample Output        : a: 6 is greater
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int a,b;                                                            //Declare Variables as int type
	printf("Enter the two numbers "); 
	scanf("%d%d",&a,&b);                                               //Read input from user
	a>b?printf("a: %d is greater",a):printf("b: %d is greater",b);    //compare a and b print biggest

    return 0;
}

