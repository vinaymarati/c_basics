/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              : No of days in month in particular year
*Sample Input         : Enter the year and month2025 2
*Sample Output        : no of days 28 in month 2
*
*************************************************************************/


#include <stdio.h>
int fun_days(int year,int month)
{
	int max_days;
	switch(month)
	{
		case 4:
		case 6:
		case 9:
		case 11: max_days=30;
				 break;
		case 2: if(((year%100!=0) && (year%4==0)) || year%400==0)
				{
					max_days=29;
				}
				else
				{
					max_days=28;
				}
				break;
		default: max_days=31;
				 break;
	}
return max_days;

}
int main()
{
	int year,month,days;
	int ret=1;
	while(ret)
	{
		printf("Enter the year and month");
		scanf("%d%d",&year,&month);
		while(getchar() !='\n');
		if(year>999 && year<=9999 && month>0 && month<=12)
		{
			ret=0;
		
		}
		else
	{
		printf("\nEnter valid year and month");
	}
	}
	days=fun_days(year,month);
	printf("no of days %d in month %d",days,month);
   return 0;
}

