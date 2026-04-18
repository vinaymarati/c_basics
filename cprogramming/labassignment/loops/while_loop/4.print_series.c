/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Read the number and print the output in specified format
*Sample Input         : Enter the Number:5
*Sample Output        : 1-1/2+1/3-1/4+1/5
*
*************************************************************************/
/* print the series in the specific format */

#include <stdio.h>

int main()
{	
	int n,i=1,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	i=1;
	//loop iterates until i reaches to n
	while(i<=n)
	{	
		if (i==1)
		printf("%d",i);
		//if i is even negative sign is added before number
		else if(i%2==0)
		{	
		
			printf("-1/%i",i);
		}
		//if i is odd positive sign is added before number
		else
		{	
			printf("+1/%i",i);
	
		}
	
		i++;
	}
	

   return 0;
}

