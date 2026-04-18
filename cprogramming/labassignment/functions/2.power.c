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

int power_calculator(int x,int y)
{
	int power=1,i=1;
	while(i<=y)
	{
		power*=x;
		i++;
	}
return power;
}


int main()
{
	int a,n,power;
	printf("Enter the a power of n: ");
	scanf("%d%d",&a,&n);
	power=power_calculator(a,n);
	printf("power of %d to %d is %d",a,n,power);
	
   return 0;
}

