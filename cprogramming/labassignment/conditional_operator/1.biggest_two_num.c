/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Greatest of Two numbers
*Sample Input         : Enter the two Integers2 5
*Sample Output        : num2:5 is greater than num1:2
*
*************************************************************************/


#include <stdio.h>
int num1,num2;                                                       //Declare the variables as int
int main()
{
	printf("Enter the two Integers");                                
	scanf("%d%d",&num1,&num2);                                       //Read the inputs from user num1,num2
	if(num1>num2)                                                    // if num1 is greater than num2 goes to conditional block
		{
			printf("num1:%d is greater than num2:%d",num1,num2);      //print num1 is greater
		}
	else{
			printf("num2:%d is greater than num1:%d",num2,num1);      //print num2 is greater
		}
   return 0;
}

