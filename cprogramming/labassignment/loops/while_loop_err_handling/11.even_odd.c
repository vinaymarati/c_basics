/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 17-12-25
*Program              : even odd numbers in range 
*Sample Input         : Enter starting range: 20 30
*Sample Output        : Even Numbers: 20 22 24 26 28 30 
					Odd Numbers: 21 23 25 27 29
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int a=0,b=0,k,ret=1;
	while(ret)
	{
		printf("Enter starting range: ");
		scanf("%d%d",&a,&b);
		while(getchar()!='\n');
 
		if((a>0)&&(b>0))
		{
			ret=0;
		}
		else
		{
			printf("Invalid Number! Enter valid number\n");
		}
	}

	if(a<b)
	{
		printf("\nEven Numbers: ");
		k=a;
		while(a<=b)
		{
			if(a%2==0)
			{
				printf("%d ",a);
				
			}
			a++;
		}
		printf("\nOdd Numbers: ");
		a=k;
		while(a<=b)
		{
			if(a%2 !=0)
			{
				printf("%d ",a);
				
			}
		a++;
		}
	}
	else
	{
	k=b;
	printf("\nEven Numbers: ");
	while(b<=a)
	{
		if(b%2==0)
		{
			printf("%d",b);
		
		}
	b++;	
	}
	printf("\nodd numbers: ");
	b=k;
	while(b<=a)
	{
		if(b%2 !=0)
		{
			printf("%d ",b);
			
		}
b++;
	}
	}
	
	
   return 0;
}

