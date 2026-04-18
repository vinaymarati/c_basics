/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : power of number
*Sample Input         : Enter the numbers2 5
*Sample Output        : 2 to the power 5: 32
*
*************************************************************************/
/*Power of number num to the power */

#include <stdio.h>

int main()
{
	int i,num,power,result=1;
	//Read the number and power 
	printf("Enter the numbers");
	scanf("%d%d",&num,&power);
	i=0;
	/*loop iterates i reach the power and for every 
	iteration it multiply and stored in result */
	while(i<power)
	{	
		result*=num;
		i++;
	}
	//print the result power of num
	printf("%d to the power %d: %d",num,power,result);
   return 0;
}

