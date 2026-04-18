/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              : calculator
*Sample Input         : Enter the numbers: 20 10 
				enter the operator/

*Sample Output        : 20 / 10 is 2
*
*************************************************************************/


#include <stdio.h>
int add(int a,int b)
{
	int result;
	result=a+b;
	return result;
}
int sub(int a, int b)
{
	int result ;
	result=a-b;
	return result;
}
int mul(int a,int b)
{
	int result;
	result=a*b;
	return result;
}
int quotient(int a,int b)
{
	int result;
	result=a/b;
	return result;
}
int rem(int a,int b)
{
	int result;
	result=a%b;
	return result;
}
int main()
{
	int a,b,result;
	char c;
	printf("Enter the numbers: ");
	scanf("%d%d",&a,&b);
	printf("\nenter the operator");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':result=add(a,b);
				 printf("%d + %d is %d",a,b,result);
				 break;
		case '-':result=sub(a,b);
				 printf("%d - %d id %d",a,b,result);
				 break;
		case '*':result=mul(a,b);
				 printf("%d * %d is %d",a,b,result);
				 break;
		case '/':result=quotient(a,b);
				 printf("%d / %d is %d",a,b,result);
				 break;
		case '%':result=rem(a,b);
				 printf("%d  %d is %d ",a,b,result);
				 break;
	}
	return 0;
}

