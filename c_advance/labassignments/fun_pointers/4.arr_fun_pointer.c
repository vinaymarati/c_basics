/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-03-26
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
void invokeptr(int (*fptr[])(int,int),int x,int y,char op);

int main()
{
	int num1,num2,n;
	char ch;
	int (*fptr[4])(int,int)={add,sub,mul,div,mod};
	printf("Enter the numbers a : b \n");
	scanf("%d%d",&num1,&num2);
    getchar();
	printf("Enter the operator : ");
	scanf(" %c",&ch);
	invokeptr(fptr,num1,num2,ch);

	/*switch(ch)
	{
		case '+': invokeptr(fptr,num1,num2,ch);
					break;
		case '-': invokeptr(fptr,num1,num2,ch);
					break;
		case '*': invokeptr(fptr,num1,num2,ch);

					break;
		case '/': invokeptr(fptr,num1,num2,ch);

					break;
		case '%':invokeptr(fptr,num1,num2,ch);
					break;
	}*/
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
5}
int div(int x,int y)
{
return x/y;
}
int mod(int x,int y)
{
	return x%y;
}
void invokeptr(int (*fptr[])(int,int),int x,int y,char op)
{
	int n=0;
	switch(op)
	{
		case '+':n=0;
				 break;
		case '-':n=1;
				 break;
        case '*':n=2;
				 break;
        case '/':n=3;
				 break;
		case '%':n=4;
				break;

	}	
	printf("%d %c %d is %d",x,op,y,fptr[n](x,y));		

}
