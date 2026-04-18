 /********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Read the number print sum of number from 1 to number
*Sample Input         : Enter the Number 10
*Sample Output        : Sum of Number 10 : 55
*
*************************************************************************/
/*Read the number and print the sum of all numbers from 1 to number*/

#include <stdio.h>

int main()
{	 
	int num,i=1,sum=0;
	printf("Enter the Number ");
	scanf("%d",&num);
	i=1;
	//sum of numbers from 1 to number
	while(i<=num)
	{	
		sum+=i;
		i++;
		
	}
	//print the total sum
	printf("Sum of Number %d : %d ",num,sum);
	
   return 0;
}

