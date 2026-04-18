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
int compare(int arr1[],int arr2[],int n);
int main()
{
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	printf("\nEnter elements of array1: ");
	for (i=0;i<n;i++)
	{
	scanf("%d",&arr1[i]);
	}
	printf("\nEnter the elements of array2: ");
	for (j=0;j<n;j++)
	{
		scanf("%d",&arr2[j]);
	}
	int ret;
	ret=compare(arr1,arr2,n);
	if(ret==1)
	{
		printf("\narrays are equal");
	}
	else if(ret==0)
	{
		printf("\n arrays are not equal");
	}
   return 0;
}

int compare(int arr1[],int arr2[],int n)
{
	for(i=0;i<n;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			return 0;
		}
	
	}
return 1;
}
