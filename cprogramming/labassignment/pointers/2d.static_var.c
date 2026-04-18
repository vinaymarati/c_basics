/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int *square();
int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		int a=*square();
		arr[i]=a;
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);

	}
	return 0;
}

int *square()
{	
	static int s;
	s++;
	s*=s;
	return &s;
}
