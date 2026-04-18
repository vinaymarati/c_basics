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
	int i=1,j=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		while(j<=n-i)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		i++;
		j=1;
		printf("\n");
		
	}

   return 0;
}

