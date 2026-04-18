/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 13-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#define R 3
#define C 3
void search_ele(int *arr[][C],int n,int *p,int *q); 

int main()
{
	
	int arr[R][C],i=0,j=0,n=0;
	int *p=0,*q=0;
	printf("Enter the array elements: \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("Enter the element: ");
	scanf("%d",&n);	
	
	search_ele(arr,n,&p,&q);
	
	printf("%d",arr[*p][*q]);

    return 0;
}
void search_ele(int *arr[][C],int n,int *p,int *q) 
{

	int i=0,j=0;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(arr[i][j]==n)
			{
				*p=i;
				*q=j;
				return 0;
			}
		}
	}
	printf("\n No element found");	
	
}
