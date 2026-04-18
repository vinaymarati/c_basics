/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              :	find the give number is negative if negative remove -ve negative
*Sample Input         : Enter the Number-30
*Sample Output        : it is Negative -
			The Number is -30
*	
*************************************************************************/


#include <stdio.h>
int num;                                      //Declare the variable as int
int main()
{
	printf("Enter the Number"); 
	scanf("%d",&num);                        //Read the input from user
	if(num<0)                                // if condition true go to if block
	{
		-num;                                // arthimatic operator changes the sign 
	 	printf("it is Negative -\n");
		printf("The Number is %d",num);
	}
	else
		printf("The Number is %d",num);
   return 0;
}

