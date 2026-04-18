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
	int n,i=1,smallest,a,num;
	printf("Enter n number");
	while(!(scanf("%d",&n)))
	{
		printf("Enter Valid Integer");
		while(getchar()!='\n');

	}
	printf("Enter First Number");
	while(!(scanf("%d",&a)))
	while(getchar()!='\n');
	n--;
	while(i<=n)
	{
	if(!(scanf("%d",&num)))
	{
		while(getchar()!='\n');
	}
	else
	{
		if(num<a)
		{
			a=num;
		}
	
	}

	i++;
	}
	printf("smallest %d",a);

   return 0;
}

