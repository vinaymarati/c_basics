/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Read the number and print sum
*Sample Input         : Enter the number: 5
					1
					2
					3
					4
					5
*Sample Output        : sum 15
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int n,sum=0,num,i=0;
	printf("Enter the number: ");
	scanf("%d",&n);                              //Read n numbers from the user
	i=0;
	while(i<n)
	{	
		scanf("%d",&num);						//loop iterates untill it reach the n 
		sum+=num;								//sum is stored in sum variable
		i++;
		
	}
	printf("sum %d",sum);						//printf total sum

   return 0;
}

