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
int remainder_function(int x,int y)
{
	int result;
	result=x%y;
	return result;
}
int main()
{
	int a,b,remainder;
	printf("Enter the values");
	scanf("%d%d",&a,&b);
	remainder=remainder_function(a,b);
	printf("Remainder of %d %d is %d",a,b,remainder);
   return 0;
}

