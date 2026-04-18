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
void rotatevalues(int *x,int *y,int *z);
int main()
{
	int x,y,z;
	printf("\nEnter the values x,y,z");
	scanf("%d%d%d",&x,&y,&z);
	rotatevalues(&x,&y,&z);
	printf("\nx=%d,y=%d,z=%d",x,y,z);
	return 0;
}
void rotatevalues(int *x,int *y,int *z)
{
	int temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
	printf("\nx=%d,y=%d,z=%d",*x,*y,*z);
}
