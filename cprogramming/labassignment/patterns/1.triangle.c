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
	int n,i=1,j=1;
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{	
			printf("*");
			j++;
		}
		printf("\n");
	i++;
	}
   return 0;
}

