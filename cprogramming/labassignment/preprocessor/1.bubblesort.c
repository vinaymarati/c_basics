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
#define MAX(x,y) (x>y?1:0)
#define SWAP(dtype,x,y) {dtype t;t=x;x=y;y=t;}
void bubblesort(int arr[],int n);
int main()
{
	int i=0,n=0;
	int arr[50];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elemets: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
   return 0;
}
void bubblesort(int arr[],int n)
{
int i=0,j=0;
for(i=0;i<n;i++)
{	int flag=0;
	for(j=0;j<n-i-1;j++)
	{
		if(MAX(arr[j],arr[j+1]))
		{
			SWAP(int,arr[j],arr[j+1])
			flag=1;
		}
	}
	if(flag==0)
		break;
}
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}

}

