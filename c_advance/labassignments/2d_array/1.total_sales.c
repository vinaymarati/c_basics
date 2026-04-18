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
	int i=0,j=0,s1=0,s2=0,s3=0;
	printf("enter the %dx%d matrix\n",R,C);
	for(i=0;i<R;i<i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&store_arr[i][j]);
		}
		
	}
	printf("\narray is: \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d",store_arr[i][j]);
		}
		printf("\n");
	}
	//prints the sales of each person
	for(i=0;i<R;i++)
	{	s1=0;
		for(j=0;j<C;j++)
		{
			s1+=store_arr[i][j];	
		}
		printf("\n sales of each person%d:%d ",i+1,s1);	
	}
	//prints of sales of each item
	for(i=0;i<C;i++)
	{	s1=0;
		for(j=0;j<R;j++)
		{
			s1+=store_arr[j][i];	
		}	
			printf("\n sales of each item%d :%d ",i+1,s1);
	}	
	//prints the total items sales	
	for(i=0;i<R;i++)
	{	
		for(j=0;j<C;j++)
		{
			s1+=store_arr[i][j];	
		}
		
	}
 printf("\n total sales:%d ",s1);
   return 0;
}

