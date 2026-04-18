/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              : Quotent of a and b
*Sample Input         : Enter the a and b values:10 2
*Sample Output        : Enter the a and b values:10 2
*
*************************************************************************/


#include <stdio.h>
int quotient_function(int x,int y)
{	
	int result;
	result=x/y;
	return result;
}

int main()
{
	int a,b,quotient;
	printf("Enter the a and b values:");
	scanf("%d%d",&a,&b);
	quotient=quotient_function(a,b);
	printf("quotient of %d %d is %d ",a,b,quotient);
   return 0;
}

