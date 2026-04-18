/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              : Prime number
*Sample Input         : Enter the number: 17
*Sample Output        : 17 is prime
*
*************************************************************************/


#include <stdio.h>
int prime(int x)
{
	int i=2,k;
	while(i<=x/2)
	{
		if(x%i==0)
		{
			break;
		}
i++;
	}
	if(i==(x/2)+1)
	{
		k=1;
	}
	else
	{
		k=0;
	}
return k;
}
int main()
{
	int n,is_prime;
	printf("Enter the number: ");
	scanf("%d",&n);
	is_prime=prime(n);
	if(is_prime)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	return 0;
}

