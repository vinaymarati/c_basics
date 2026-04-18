/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-12-25
*Program              :	Enter the four digit number in specified format
*Sample Input         : Enter the value of a: 3467
*Sample Output        : 3
					    34
       				    346
     				    3467

*
*************************************************************************/


#include <stdio.h>
int a;
int main()
{
printf("Enter the value of a: ");
scanf("%d",&a);
printf("%d\n%d\n%d\n%d\n",a/1000,a/100,a/10,a);

   return 0;
}

