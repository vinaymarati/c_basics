/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              :	Swap values
*Sample Input         : Enter the values a and b 10 20
*Sample Output        : a :20,b: 10
*
*************************************************************************/


#include <stdio.h>
void swap_values(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("a :%d,b: %d",x,y);
}

int main()
{
	int a,b;
	printf("Enter the values a and b");
	scanf("%d%d",&a,&b);
	swap_values(a,b);

   return 0;
}

