/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Biggest of two numbers
*Sample Input         : Enterthe Numbers:10 2
*Sample Output        : a is biggest 10
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int a,b;
	printf("Enterthe Numbers:");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{	
		case 1:printf("a is biggest %d",a);
			break;
		default:printf("b is biggest %d ",b);
			break;
	}
   return 0;
}

