/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int i=1,n,num,a;
	printf("Enter n Number: \n");
	while(!(scanf("%d",&n)))
	{	
		printf("Enter the valid Integral Value\n");
		while(getchar() !='\n');
	}
	printf("Enter the first Number: ");
	while(!(scanf("%d",&a)))
	while(getchar() != '\n')
	n--;
	while(i<=n)
	{
		if(!(scanf("%d",&num)))
		{
			printf("Enter valid number\n");
			while(getchar() != '\n');
		}
		else
		{	
			if(a>num)
			{	
				printf("The given number is smaller than previous number\n");
			}
			else
			{	
				printf("The given number is greater than previous number\n");
			}
		i++;
		a=num;	
		}	
	}
	
   return 0;
}

