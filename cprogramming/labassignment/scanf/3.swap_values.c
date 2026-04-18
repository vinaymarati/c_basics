/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-12-25
*Program              :Swap the values of 2 variables
*Sample Input         :Enterthe values: 65 75
*Sample Output        :a: 75, b: 65
*
*************************************************************************/


#include <stdio.h>
int a,b,temp;
int main()
{
printf("Enterthe values: ");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a: %d, b: %d",a,b);
   return 0;
}

