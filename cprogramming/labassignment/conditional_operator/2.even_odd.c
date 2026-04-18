/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Given Number is even or odd
*Sample Input         : Enter the Number: 24
*Sample Output        : The Number 24 is even
*
*************************************************************************/


#include <stdio.h>
int num;                                           //Declare the variable as int
int main()
{
	printf("Enter the Number: ");  
	scanf("%d",&num);                              //Read the input from user
	if(num%2==0)                                   // if condition True(R==0) goes to if block and if condition false go to else block
	{	printf("The Number %d is even",num);
	}
	else                                         
		printf("The Number %d is odd",num);
   return 0;
}

