/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Given Number is positive or negative of zero
*Sample Input         : Enter the Number-2
*Sample Output        : Number is -2 Negative
*
*************************************************************************/


#include <stdio.h>
int num;                                               //Declare the variable int 
int main()
{
	printf("Enter the Number");
	scanf("%d",&num);                                 //Read input from user
	if(num>0)                                         // condition true go to if block  if false go  to esle block
	{	
		printf("Number %d is positive ",num);
	}
	else if(num <0)                                  //condition true goto else block number is negative       
		 { 
		 	printf("Number is %d Negative",num);
		 }
	else
		printf("Number is Zero %d",num);            // print num is zero
   return 0;
}

