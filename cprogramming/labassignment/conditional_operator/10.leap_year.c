/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Leap Year
*Sample Input         : Enter the Year : 2028
*Sample Output        : It is Leap year : 2028
*
*************************************************************************/


#include <stdio.h>
int year;
int main()
{	printf("Enter the Year : ");
	scanf("%d",&year);
	if(year%100!=0)
	{	if(year%4==0)
		{	printf("It is Leap year : %d",year);
		}
		else
		{	printf("It is Not a Leap Year: %d",year);
		}
	}
	else
	{	if(year%400==0)
		{	printf("It is a Leap Year: %d",year);

		}
		else
		{	printf("It is Not a Leap Year: %d",year);
		}

	}

   return 0;
}

