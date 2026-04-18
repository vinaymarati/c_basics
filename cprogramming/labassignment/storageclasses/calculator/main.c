/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 28-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int add();
int sub();
int mul();
int div();
int rem();
int a,b;
char opr;
int main()
{
	int k=1,n=1,ret=0;
	printf("Enter the values of a,b: ");
	while(k)
	{
		ret=scanf("%d%d",&a,&b);
		while(getchar()!='\n');
		if(ret==2)
		{
			k=0;
		}
		else
		{
			printf("\nEnter the valid Numbers");
		}
	}
	printf("\nEnter the operator: ");
	while(n)
	{
		scanf(" %c",&opr);
		while(getchar()!='\n');
		switch(opr)
		{
		  case '+':printf("%d + %d = %d",a,b,add());
					n=0;
					break;
		case '-':printf("%d - %d = %d",a,b,sub());
					n=0;
					break;
		case '*':printf("%d * %d = %d",a,b,mul());
				n=0;
				break;
		case '/':printf("%d / %d = %d",a,b,div());	
					n=0; 
					break;
		case '%':printf("%d %%  %d = %d",a,b,rem());	
					n=0;
					break;
		default:printf("\nEnter The valid operator");
		}
	}

	
   return 0;
}

