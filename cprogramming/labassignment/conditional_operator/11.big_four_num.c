/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int a,b,c,d;
int main()
{
	printf("Enter the Numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{	if(a>c)
		{	if(a>d)
			{	printf("a is greater %d",a);
			}
			else
			{	printf("d is greater %d",d);
			}
		}
		else 
		{	if(c>d)
			{	printf("c is greater %d",c);
			}
			else
			{	printf("d is greater %d",d);
			}
		}
	}
	else
	{	if(b>c)
		{	if(b>d)
			{	printf("b is greater %d",b);
			}
			else
			{	printf("d is grater %d",d);
			}

		}
		else
		{	if(c>d)
			{	printf("c is greater %d",c);
			}	
			else
			{	printf("d is greater %d",d);
			}
		}
	}
	

		
   return 0;
}

