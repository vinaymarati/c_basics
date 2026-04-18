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

#define R  3
#define C  3

int main()
{
    int m1[R][C],m2[R][C],m3[R][C];
	int i=0,j=0;
	printf("Enter the matrix:1 %dx%d:\n",R,C);
	//read the matrix from user m1
	for( i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the matrix:2 %dx%d:\n",R,C);
	//read the matrix from user m1
	for( i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}

	
    printf("\nAddition of Matrix1 and Matrix2: \n");
	for( i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",m3[i][j]=m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	printf("\nSubtraction of Matrix1-Matrix2 is: \n");
	for( i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",m3[i][j]=m1[i][j]-m2[i][j]);
		}
		printf("\n");
	}


		

   return 0;
}

