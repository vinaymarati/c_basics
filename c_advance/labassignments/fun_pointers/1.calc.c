/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 17-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);
int main()
{
	int a,b;
	char op;
	int (*ptr)(int,int);
	printf("Enter the numbers a : b \n");
	scanf("%d%d",&a,&b);
    getchar();
	printf("Enter the operator : ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+': ptr=add;
					break;
		case '-': ptr=sub;
					break;
		case '*': ptr=mul;
					break;
		case '/': ptr=div;
					break;
		case '%':ptr=mod;
					break;
	}
	printf("%d %c %d is %d",a,op,b,(*ptr)(a,b));
   return 0;
}
int add(int x,int y)
{
return x+y;
}
int sub(int x,int y)
{
return x-y;
}
int mul(int x,int y)
{
return x*y;
}
int div(int x,int y)
{
return x/y;
}
int mod(int x,int y)
{
	return x%y;
}
