/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{	int a;                                                                     //Declare variable as int
	printf("Enter the Number ");
	scanf("%d",&a);                                                            //Read input from user
	a%2==0?printf("%d is Even Number",a):printf("%d is odd Number",a);         //check if a%2==0 remainder is zero it is evenelse it is odd
   return 0;
}

