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
	int a,b,n;
	char op;
	int (*ptr[4])(int,int)={add,sub,mul,div};
	printf("Enter the numbers a : b \n");
	scanf("%d%d",&a,&b);
    getchar();
	printf("Enter the operator : ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+': n=0; 
					break;
		case '-': n=1;
					break;
		case '*': n=2;
					break;
		case '/': n=3;
					break;
		case '%': n=4;
					break;
	}
	printf("%d %c %d is %d",a,op,b,(*ptr[n])(a,b));
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
