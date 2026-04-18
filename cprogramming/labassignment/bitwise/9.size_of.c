/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
i*Date                 : 22-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdio.h>

int main()
{
	int num1,result=0;
	printf("Enter the number: ");
	scanf("%d",&num1);
	num1=num1 | 0x1;
	int i=0;
	while(num1)
	{
		num1=num1<<1;
		printf("\n num value is %d",num1);
		i++;
		printf("\n i value %d",i);
		
	}
	result=i/8;
	printf("\nsize of num is: %d",result);
   return 0;
}

