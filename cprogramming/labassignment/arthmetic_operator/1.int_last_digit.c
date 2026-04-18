/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-12-25
*Program              : Read integer print last digit
*Sample Input         : Enter the Number2345
*Sample Output        : Last Digit of Given Integer 2345: 5
*
*************************************************************************/


#include <stdio.h>
int a;                                                          //variable declaration                               
int main()
{
	printf("Enter the Number");
	scanf("%d",&a);                                             //read the input from user stored in Variable a
	printf("Last Digit of Given Integer %d: %d",a,a%10);        // Print the last digit of the input
   return 0;
}

