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
int i,n,count,big;
int count_bignum(int arr[],int n);
int main()
{
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	count=count_bignum(arr,n);
	printf("Biggest %d number is repeated %d times",big,count);
   return 0;
}
int count_bignum(int arr[],int n)
{
for (i=0;i<n;i++)
{
if(i==0)
{
big=arr[i];
}
else
{
if (big<arr[i])
	{
		big=arr[i];
	}
}
}
for(i=0;i<n;i++)
{
if(arr[i]==big)
count++;
}
return count;
}
