/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int arr[10];
	int *ptr,i=0;
	printf("Enter the array elements: ");
	while(i<10)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	printf("\narray");
	i=0;
	while(i<10)
	{
		printf("%d ",arr[i]);
	
		i++;
	}
	i=0;
   while(i<10)
	{	
		ptr=&arr[i];
		printf("\naddress: %p ,and arr[%d]:%d ",ptr,i,*ptr);
		i++;
	}
return 0;
}

