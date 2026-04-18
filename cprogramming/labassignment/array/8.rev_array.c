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
  int i,j,n;
int main()
{	int temp;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("\nThe swap elements of array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
   return 0;
}

