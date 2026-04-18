/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Read the Number and print factorial
*Sample Input         :	Enter the number: 5
*Sample Output        : factorial of 5 :120
*
*************************************************************************/
/*Read number from user and calculate factorial of number. factorial is multiply number from 1 to number*/

#include <stdio.h>

int main()
{
		
	int i,n,prod=1,a;
	//read number from user
	printf("Enter the number: ");
	scanf("%d",&n);
	i=1;
	a=n;
	//calculate factorial of number stored in prod variable
	while(i<=a)
	{	
		prod*=n;
		n--;
		i++;
		
	}
	//print the factorial
	printf("factorial of %d :%d",a,prod);

	   return 0;
}

