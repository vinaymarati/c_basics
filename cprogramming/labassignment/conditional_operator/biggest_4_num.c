/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int a,b,c,d,greatest=0;
int main()
{
	printf("Enter the numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (greatest<a)
	{	greatest=a;
	}	
	if(greatest<b)
		{	greatest=b;
		}
	if(greatest<c)
		{	greatest=c;
		}
	if(greatest<d)
		{
			greatest=d;
		}
	
	printf("Greatest is %d ",greatest);
	
	
   return 0;
}

