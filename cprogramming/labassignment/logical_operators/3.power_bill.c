/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : Calculate the power bill
*Sample Input         : Enter the units: 300
*Sample Output        : Bill is: 165.000000
*
*************************************************************************/


#include <stdio.h>

int main()
{
	float total_bill,extra_units,units;               //Declare th variables as float 
	printf("Enter the units: ");
	scanf("%f",&units);
	if(units<=200)
	{	
		total_bill=100;
		printf("Bill is: %f",total_bill);
	}
	else if(units>200 && units<=400)
	{	
		extra_units=400-units;
		total_bill=100+(extra_units*0.65);
		printf("Bill is: %f",total_bill);
	}
	else if (units>400  && units<=600)
	{	
		extra_units=600-units;
		total_bill=230+(extra_units*0.80);
		printf("Bill is: %f",total_bill);
	}
	else
	{	
		extra_units=units-600;
		total_bill=390+(extra_units*1.0);
		printf("Bill is : %f",total_bill);
		
	}
   return 0;
}

