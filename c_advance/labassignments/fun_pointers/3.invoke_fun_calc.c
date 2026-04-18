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
void invokeptr(int(*fptr)(int,int),int x,int y);

int main()
{
	int num1,num2,n;
	char op;
	int (*ptr)(int,int);
	printf("Enter the numbers a : b \n");
	scanf("%d%d",&num1,&num2);
    getchar();
	printf("Enter the operator : ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+': invokeptr(add,num1,num2);
					break;
		case '-': invokeptr(sub,num1,num2);
					break;
		case '*': invokeptr(mul,num1,num2);
					break;
		case '/': invokeptr(div,num1,num2);
					break;
		case '%':invokeptr(mod,num1,num2);
					break;
	}
//	printf("%d %c %d is %d",a,op,b,(*ptr[n])(a,b));
   return 0;
}
void invokeptr(int(*fptr)(int,int),int x,int y)
{
	printf("%d",(*fptr)(x,y));
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
