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
	int i,j,n;
	printf("Enter the n number");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{	
			for(j=1;j<=i;j++)
			{
				printf("%d",n+1-i);
			}
			printf("\n");
		}
	return 0;
}

