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
int specific_element(int arr[],int n,int a);
int i,size,a;
int main()
{ 	int result;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element: ");
	scanf("%d",&a);
	result=specific_element(arr,size,a);
	if(result!=-1)
	{
		printf("%p ",&arr[i]);
	}	

	else if(result==-1)
	{
		printf("%d",result);
	}
   return 0;
}
int specific_element(int arr[],int size, int a)
{
for(i=0;i<size;i++)
{
if(arr[i]==a)
{
 return i;
}

}
return -1;
}
