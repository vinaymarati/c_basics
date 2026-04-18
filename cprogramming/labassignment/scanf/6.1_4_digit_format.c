/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-12-25
*Program              : Print the 4 digit Number in speccified format
*Sample Input         : Enter the Four Digit Number6789
*Sample Output        : 6
 					     7
						  8
  						   9
*
*************************************************************************/


#include <stdio.h>
int a;
int q1,q2,q3,r1,r2,r3;
int main()
{
printf("Enter the Four Digit Number");
scanf("%d",&a);
q1=a/1000;
r1=a%1000;
q2=r1/100;
r2=r1%100;
q3=r2/10;
r3=r2%10;
printf("%d\v%d\v%d\v%d",q1,q2,q3,r3);
   return 0;
}

