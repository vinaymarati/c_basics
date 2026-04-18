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
	do
	{	
	
		do
		{	
			printf("*");
			j++;	
			
		}while(j<=i);
		j=1;
		i++;
		printf("\n");
	}while(i<=n);
   return 0;
}

