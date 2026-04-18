/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              : Biggest of Three Numbers
*Sample Input         : Enter the Numbers 4 5 9
*Sample Output        : The biggest is 9
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int a,b,c,big;                                   //Declare variabes as int and take temp variable
	printf("Enter the Numbers ");
	scanf("%d%d%d",&a,&b,&c);                        //Read inputs from user
	big=a;                                           //Assume a is big. a value is assigned to big            
	b>big?big=b:big;                                 // it compare with b with big if b is big big=b
	c>big?big=c:big;								// compare c with big if c is big big=c
	printf("The biggest is %d ",big);	
   return 0;
}

