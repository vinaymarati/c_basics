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

int main()
{
	int a=0,b=0,ret=1;
	char op;
	printf("enter the numbers: ");
	while(ret)
	{
		scanf("%d%d",&a,&b);
		while(getchar() != '\n');
		if((a>0) && (b>0))
		{
			ret=0;
		}
		else
		{
			printf("\nEnter the valid numbers: ");
		}
		
	}
	printf("Enter the Character");
	do
	{
	 	scanf(" %c",&op);
		switch(op)
		{
		case '+':printf("Addition %d %d is %d",a,b,a+b);
				break;
		case '-':printf("Subtraction %d %d is  %d",a,b,a-b);
				break;
		case '*':printf("Multiplication %d %d is %d",a,b,a*b);
				break;
		case '/':printf("Division %d %d is %d",a,b,a/b);
				break;
		case '%':printf("Reaminder %d %d is %d",a,b,a%b);
				break;
	
		default:printf("Enter valid operator");
				break;
		}
	}while(op!='+' && op!='-'&&op!='*' && op!='/' && op!='%');
	
   return 0;
}

