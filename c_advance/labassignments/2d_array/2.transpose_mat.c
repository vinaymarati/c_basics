

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
#define R   3
#define C   3
int main()
{
	int store_arr[R][C];
	int i=0,j=0;
	printf("enter the %dx%d matrix\n",R,C);
	//Read the elements from the user  store in store_arr array
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&store_arr[i][j]);
		}
		
	}
	printf("\nMatrix  is: \n");
	//prints the matrix 
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d",store_arr[i][j]);
		}
		printf("\n");
	}


	//Transpose of matrix 
	//rows will change to columns will change to rows
	for(i=0;i<C;i++)
	{	s1=0;
		for(j=0;j<R;j++)
		{	
			printf("%d ",store_arr[j][i]);
		}
		printf("\n");
	}	
	   return 0;
}

