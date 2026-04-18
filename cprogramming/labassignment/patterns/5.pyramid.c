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
	int n,i=1,j=1,k=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n-i;j++)
		{	
			printf(" ");
			
		}
		for (k=1;k<=i;k++)
		{	
			printf("* ");

		}
	printf("\n");
	}

   return 0;
}

