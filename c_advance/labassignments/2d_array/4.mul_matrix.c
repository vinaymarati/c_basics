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
#define R1  2 
#define C1	3
#define R2  3
#define C2  2
int main()
{
	int m1[R1][C1],m2[R2][C2],m3[R1][C2];
	int i=0,j=0;
	printf("Enter the matrix:1 %dx%d:\n",R1,C1);
	//read the matrix from user m1
	for( i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the matrix:2 %dx%d:\n",R2,C2);
	//read the matrix from user m1
	for( i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMultiplication of matrix :\n");
	//read the matrix from user m1
	for( i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			m3[i][j]=0;
			for(int k=0;k<C1;k++)
			{
				m3[i][j]+=m1[i][k]*m2[k][j];
			}
		}
		
	}
	
for( i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
		printf("%d ",m3[i][j]);	
		}
	printf("\n");
	}



   return 0;
}

