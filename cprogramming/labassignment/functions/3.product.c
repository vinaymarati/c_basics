/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int product_function(int x ,int y)
{
	int i=1,result=0;
	while(i<=y)
	{
		result+=x;
		i++;
	
	}
	return result;
}
int main()
{
	int a,b,product=0;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	product=product_function(a,b);
	printf("product of %d %d is %d",a,b,product);
   return 0;
}

