/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 29-11-25
*Program              :Area and Perimeter of Circle
*Sample Input         :Enter the radius4
*Sample Output        :Area of circle 50.240002,Perimeter of circle 25.120001km@km
*
*************************************************************************/


#include <stdio.h>
float pi=3.14;
int r;
float area,perimeter;
int main()
{
printf("Enter the radius");
scanf("%d",&r);
area=pi*r*r;
perimeter=2*pi*r;
printf("Area of circle %f,Perimeter of circle %f",area,perimeter);

   return 0;
}

