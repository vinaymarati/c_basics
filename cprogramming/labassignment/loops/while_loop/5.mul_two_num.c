/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Multiply two numbers with out multiply operator
*Sample Input         : Enter the numbers5 4
*Sample Output        : sum of num1:5 num2:4 is 20
*
*************************************************************************/
/*Read the two numbers from user and multiply  the numbers without using the '*' operator */

#include <stdio.h>

int main()
{
	int num1,num2,sum=0,i;
	//Read the  numbers
	printf("Enter the numbers");
	scanf("%d%d",&num1,&num2);
	i=0;
	//Loop iterates the until i reaches the num1
	while(i<num1)
	{	
		sum+=num2;
		i++;
		
	}
	printf("sum of num1:%d num2:%d is %d",num1,num2,sum);
   return 0;
}

