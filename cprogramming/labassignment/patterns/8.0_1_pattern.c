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
	int i,j,n,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
		{
			c=i+j;
			if(c%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}

		}
		printf("\n");
	}
	return 0;
}

