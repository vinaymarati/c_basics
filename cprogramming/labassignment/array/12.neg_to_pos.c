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
int i,n;
void neg_to_pos(int arr[],int n);
int main()
{
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	
	}
	neg_to_pos(arr,n);
	return 0;
	
   return 0;
}
void neg_to_pos(int arr[],int n)
{ int a;
for(i=0;i<n;i++)
{

if(arr[i]<0)
{
arr[i]=-arr[i];
}
}
for (i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

