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
	int i,j,k,n;
	printf("Enter the n number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");

		}
		printf("\n");
	}
	n--;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*(n-i)+1);k++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;

}

