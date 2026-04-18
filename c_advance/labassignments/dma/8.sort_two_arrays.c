/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 16-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
 /*Write a function that takes two sorted integer arrays as input, and
 returns an array of integers from both arrays in sorted order, excluding duplicate numbers. */
#include <stdio.h>
#include <stdlib.h>

//void *malloc(size_t);
//void *realloc(size_t,size_t);
void sort_array(int *nump,int size);
int * realloc_size(int *arr1,int m,int  *arr2,int n);
int size,ret;
int main()
{
	int arr1[10],arr2[10],n,m,i;
	
	printf("Enter the number of elements of arr1  : ");
	scanf("%d",&m);
	printf("\nEnter the number of elements of arr2  : ");
	scanf("%d",&n);
	printf("\nEnter the arr1: ");
	//size=m+n;
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter the integer elements of Arr2: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
   
    /* printf("\narr1\n");
   	for(i=0;i<m;i++)
	{
	    printf("%d",arr1[i]);
	}

    printf("\narr2");
    	for(i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}*/


	printf("values got \n");
	int *v=	realloc_size(arr1,m,arr2,n);
	printf("\nsize %d\n",ret);
	for(i=0;i<ret;i++)
	{
		printf("%d",*(v+i));
	}	
	free(v);
   return 0;
}

int * realloc_size(int *arr1,int m,int  *arr2,int n)
{
	
	int i=0,j=0,size = (m+n);
	int *nump=(int *)malloc(size*sizeof(int));
	for(i=0,j=0;i<size;i++)
	{
			if(i<m)
			{
              
			    *(nump+i)=*(arr1+i);
                
                 //printf("nump + i = %d  , i = %d  ",arr1[i], i); 
			}
			else
			{
				*(nump+i)=*(arr2+j);
                     
                 //printf("nump + j = %d  , i = %d  ",arr2[j], j); 
				j++;
                
			}
			
	}
	printf("Merged array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d",*(nump+i));
	}
	sort_array(nump,size);
	printf("\nafter deleted duplicate");
	printf("\nsize %d",size);
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(nump[j]==nump[j+1])
			{
			for(int k=j;k<size-1;k++)
			{
				nump[k]=nump[k+1];
			}	
			size--;
			}
		}
	}
	printf("\nsize %d",size);
	ret=size;
	int *pp=(int *)realloc(nump,sizeof(int)*size);
	if(pp==NULL)
	{
		printf("Memory is not allocated");
		return 0;
	}
	return pp;

}
void sort_array(int *nump,int size)
{
	int i=0,j=0;
	for(i=0;i<(size)-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(*(nump+j)>*(nump+j+1))
			{
				int t=*(nump+j);
				*(nump+j)=*(nump+j+1);
				*(nump+j+1)=t;
			}
			
		}
	
    }

    printf("\nsorted array\n");
	for(i=0;i<size;i++)
	{
		printf("%d",*(nump+i));
	}
		
}
