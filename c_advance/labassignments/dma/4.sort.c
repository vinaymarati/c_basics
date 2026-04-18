/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 16-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
void sortintegers(int *nump,int n);
void *malloc(size_t);
int main()
{

	int *nump,i=0,j=0,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	//allocation of memory 
	nump=(int *)malloc(n*sizeof(int));
	//if there is no space exit the program 
	if(nump==NULL)
	{
		printf("Memory is allocated");
		return 0;
	}
	//read the integers from the user store in allocated memory
	for(i=0;i<n;i++)
	{
		scanf("%d",nump+i);
	}
	//this function sort the elements
	sortintegers(nump,n);
	printf("\nSorted array");
	for(i=0;i<n;i++)
	{
		printf("%d",*(nump+i));
	}
	
   return 0;
}
//function sorts the array of integers 
void sortintegers(int *nump,int n)
{
	int i=0,j=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			//if the 1st element is greater than 2nd element sort the elements
			if(*(nump+j)>(*(nump+j+1)))
			{
				int temp=*(nump+j);
				*(nump+j)=*(nump+j+1);
				*(nump+j+1)=temp;		
			}
		
		}
	}
}
