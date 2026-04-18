/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-12-25
*Program              :date in specified format
*Sample Input         :Enter the day-month-year: 01-12-2025
*Sample Output        :1/12/2025
*
*************************************************************************/


#include <stdio.h>
int day,month,year;
int main()
{
printf("Enter the day-month-year: ");
scanf("%d-%d-%d",&day,&month,&year);
printf("%d/%d/%d",day,month,year);
   return 0;
}

