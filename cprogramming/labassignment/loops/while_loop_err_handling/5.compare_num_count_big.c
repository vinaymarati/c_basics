/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int n,a,num,i=1,count=0;
	printf("Enter n number: ");
	while(!(scanf("%d",&n)))
	{
		printf("Enter valid integral value");
		while(getchar() != '\n');
	}
	printf("Enter the first number\n");
	while(!(scanf("%d",&a)))
	while(getchar() != '\n')
	n--;
	while(i<=n)
	{	
		if(!(scanf("%d",&num)))
		{	
			printf("Enter valid number");
			while(getchar() != '\n');
		}
		else
		{
			if(a<num)
			{	
				count+=1;
				
			}
		a=num;	
		}
		i++;
	}
	printf("The count is %d ",count);
   return 0;
}

