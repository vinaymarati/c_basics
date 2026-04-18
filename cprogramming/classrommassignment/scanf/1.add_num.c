/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 03-12-25
*Program              : Adding of two Numbers
*Sample Input         : Enter the numbers23 45
*Sample Output        : Add two numbers  23 + 45 = 68
*
*************************************************************************/


#include <stdio.h>
int num1,num2;                                                          //declare the variables
int main()
{
    printf("Enter the numbers");                                              
	scanf("%d%d",&num1,&num2);							                // Reading inputs from user
	printf("Add two numbers  %d + %d = %d ",num1,num2,num1+num2);      // adding two numbers 
   	return 0; 
}

