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
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");

		}
		for(k=1;k<=(n+1)-i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
   return 0;
}

