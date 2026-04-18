/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 07-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#define MAX(x,y) ((x>y)?(x):(y))
int main()
{
	int big=0,i;
	int arr[4];
	printf("Enter the string");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		if(i==0)
			big=arr[i];
		else
		{
			big=MAX(big,arr[i]);
		}
	}
	printf("big=%d",big);
   return 0;
}

