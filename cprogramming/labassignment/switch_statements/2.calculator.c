/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : calculator program
*Sample Input         : Enter the Values: 2 3 *	
*Sample Output        : Enter the Values: 2 3 *
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int a,b;
	char ch;
	printf("Enter the Values: ");
	scanf("%d%d %c",&a,&b,&ch);
	switch(ch)
	{	
		case '+':printf("Addition = %d",a+b);
				break;
		case '-':printf("Subtraction = %d",a-b);
				break;
		case '*':printf("Multiplication = %d",a*b);
				break;
		case '/':printf("Division = %d ",a/b);
				break;
		case '%':printf("Remainder = %d ",a%b);
				break;
		default: printf("Not valid");
	}

   return 0;
}

