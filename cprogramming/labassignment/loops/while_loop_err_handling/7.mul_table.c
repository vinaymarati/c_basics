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
	int n,i=1;
	printf("Enter n number");
	while(!(scanf("%d",&n)))
	{
		printf("Enter valid INtegral value");
		while(getchar() !='\n');
	}
	while(i<=10)
	{
		printf("%d * %d = %d",n,i,n*i);
		printf("\n");
		i++;
	}
   return 0;
}

