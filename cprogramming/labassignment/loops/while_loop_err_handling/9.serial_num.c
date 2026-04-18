/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 16-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int num1,num2,temp;
	printf("Enter the numbers");
	while(!(scanf("%d",&num1)))
	{
	printf("Enter valid integral value");
	while(getchar()!='\n');
	}
	while(!(scanf("%d",&num2)))
	{
	printf("Enter the valid integral value");
	while(getchar() != '\n');
	}
	printf("series: ");	
	if(num1<=num2)
	{
	
	while(num1<=num2)
	{
		printf("%d ",num1);
		num1++;
	}
	}
	else
	{
	temp=num1;
	num2=num1;
	num1=temp;
	while(num1<=num2)
	{
		printf("%d",num1);
		num1++;
	}
	}
   return 0;
}

