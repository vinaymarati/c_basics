/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 21-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#define SET_BIT(x,p) x |(0x1<<p)
#define CLEAR_BIT(x,p) x & ~(0x1<<p)
#define TOGGLE_BIT(x,p) x ^ (0x1<<p)
#define CHECK_BIT(x,p) x & (0x1<<p)
#include <stdio.h>
 
int main()
{
	int a,p;
	printf("Enter the hexadecimal number: ");
	scanf("%x",&a);
	printf("\nEnter the bit position: ");
	scanf("%d",&p);
	printf("\nset bit %x",SET_BIT(a,p));
	printf("\nclear bit %x ",CLEAR_BIT(a,p)); 
	printf("\ntoggle bit %x ",TOGGLE_BIT(a,p));
	if(CHECK_BIT(a,p))
	{
		printf("\nOn");
	}
	else
	{
		printf("\nOff");
	}
	
   return 0;
}

