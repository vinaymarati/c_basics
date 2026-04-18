/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 19-12-25
*Program              : calculator program
*Sample Input         : Enter the a ,b values :20 30
						Enter the operator: *
*Sample Output        : Multiplication of 20 30 is 600 
*
*************************************************************************/


#include "calculator.h"

int main()
{
	int a,b,result;
	char op;
	printf("Enter the a ,b values :");
	scanf("%d%d",&a,&b);
	printf("Enter the operator: ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':result=add(a,b);
				 printf("Addition of %d %d is %d ",a,b,result);
				 break;
		case '-':result=sub(a,b);
				 printf("subtraction of %d %d is %d ",a,b,result);
				 break;
		case '*':result=mul(a,b);
				 printf("Multiplication of %d %d is %d ",a,b,result);
				 break;
		case '/':result=div(a,b);
				 printf("Division of %d %d is %d ",a,b,result);
				 break;
		default:printf("Invalid operator");
				break;
	}
	return 0;
}

