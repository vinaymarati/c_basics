/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int swap(int *p);
int main()
{
	int arr[2]={2,5},i;
	printf("Before swap: ");
	for (i=0;i<2;i++)
	{
		printf("%d ",arr[i]);
	}
	swap(arr);
	printf("\nAfter swap: ");
	for(i=0;i<2;i++)
	{
		printf("%d ",arr[i]);
	}
   return 0;
}

