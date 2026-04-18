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
int arr[10],i,small,large,a,b;
int main()
{
	printf("Enter the elements od array: ");
	for (i=0;i<10;i++)
	{
	scanf("%d ",&arr[i]);
	
	}
	printf("\nAll Elements of array: ");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	small=arr[0];
	large=arr[0];
	for(i=1;i<10;i++)
	{
	if(arr[i]<small)
	{
		small=arr[i];
		a=i;
	}
	else 
	{
		large=arr[i];
		b=i;	
	}
	}
printf("%d is small & address %p\n",small,&arr[a]);
printf("%d is large & address %p ",large,&arr[b]);
   return 0;
}

