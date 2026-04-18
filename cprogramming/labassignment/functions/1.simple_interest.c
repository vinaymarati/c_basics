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

float simple_interest_calculator(int p,int m,float r)
{
	float si,y;
	y=m/12.0;
	si=p*y*r/100;
	return si;
}


int main()
{
	int p,m;
	float si,r,total_amount=0;
	printf("Enter the principle amount,months,rate of interest");
	scanf("%d%d%f",&p,&m,&r);
	si=simple_interest_calculator(p,m,r);
	total_amount=si+p;
	printf("simple interest : %f",si);
	printf("total_amount: %f",total_amount);
   return 0;
}

