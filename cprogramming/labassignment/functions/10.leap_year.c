/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int fun_leap_year(int year)
{
	int result;

	if(((year%100!=0) && (year%4==0)) || (year%400==0))
    {
		result=1;
	}
else
	{
		result=0;
	}
return result;
}

int main()
{
	int year,is_leap;
	printf("Enter the year");
	scanf("%d",&year);
	is_leap=fun_leap_year(year);
	if(is_leap)
	{
	printf("Is leap year");
	}
	else
{
	printf("not leap year");
}
   return 0;
}

