/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 29-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int i;
int main()
{	int size;
	printf("Enter the size\n");
	scanf("%d",&size);
	int arr[size];
	printf("%lu",sizeof(arr));	
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
   return 0;
}

