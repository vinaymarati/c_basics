/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 16-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int num1,num2,i,j,count=0;
	scanf("%d%d",&num1,&num2);
	printf("prime numbers between %d & %d are ",num1,num2);
	for(i=num1;i<=num2;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				break;
			count+=1;
		}
		if(j==(i/2)+1)
		{
			printf("  %d",i);
		}
		
	}
	
   return 0;
}

