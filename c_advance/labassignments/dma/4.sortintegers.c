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
void *malloc(size_t);
void sortintegers(void *nump,int n);
int main()
{
	void *nump;
	int n=0,i=0;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	nump=malloc(n*sizeof(int));
	if(nump==NULL)
	{
		printf("MEMORY IS NOT ALLOCATED");
		return 0;
	}
	printf("\nEnter the integers");
	for(i=0;i<n;i++)
	{
		scanf("%d",(int *)&(nump[i]));
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(int *)(nump+i));
	}

	sortintegers(nump,n);
	for(i=0;i<n;i++)
	{
		printf("%d",*(int *)(nump+i));

	}
	
   return 0;
}

void sortintegers(void *nump,int n)
{
	int i=0,j=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if((*(int *)(nump+i))>*(int *)(nump+j))
			{
				int temp=*(int *)(nump+i);
				*(int *)(nump+i)=(*(int *)(nump+j));
				(*(int *)(nump+j))=temp;

			}
			
		}
	}
	
}

