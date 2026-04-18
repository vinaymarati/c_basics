/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : cost of extra calls
*Sample Input         : Enter the cost:extra_call_cost:number of calls 
						250 1.25 300

*Sample Output        : extra_calls 200
					 Total bill is : 500.000000
*
*************************************************************************/


#include <stdio.h>
int cost,n,extra_calls;
float extra_call_cost,extra_call_bill,total_bill;
int main()
{
	printf("Enter the cost:extra_call_cost:number of calls \n");
	scanf("%d%f%d",&cost,&extra_call_cost,&n);
	if(n<=100)
	{	total_bill=cost;
		printf("The total bill is : %f",total_bill);
	}
	else
	{	extra_calls=n-100;
		extra_call_bill=(extra_calls)*(extra_call_cost);
		total_bill=cost + extra_call_bill;
		printf("extra_calls %d\n",extra_calls);
		printf("Total bill is : %f",total_bill);
	}
   return 0;
}

