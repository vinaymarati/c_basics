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

int main()
{
	int num1,num2,temp,ret=1;
	printf("Enter the Numbers");
	while(ret)
	{
		scanf("%d%d",&num1,&num2);
		while(getchar() != '\n');
		if ((num1>0) && (num2>0))
		{
			ret=0;
		}
		else
		{
			printf("Enter valid Numbers");

		}
	}
	
	if(num1>num2)
	{ 	printf("\nseries in reverse order: ");
		while(num1>=num2)
		{
			printf("%d ",num1);
			num1--;
		}
	}
	else
	{	
		printf("\nseries in reverse order: ");
		while(num1<=num2)
		{
			printf("%d ",num2);
			num2--;
		}
	}
	
   return 0;
}

