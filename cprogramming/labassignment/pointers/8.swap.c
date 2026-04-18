/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int *ptr1,*ptr2,*ptr3;
	int x,y,z,temp;
	printf("Enter the numbers a,b,c: ");
	scanf("%d%d%d",&x,&y,&z);
	ptr1=&x;
	ptr2=&y;
	ptr3=&z;
	temp=*ptr1;
	*ptr1=*ptr3;
	*ptr3=*ptr2;
	*ptr2=temp;
	printf("\nx=%d,y=%d,z=%d",*ptr1,*ptr2,*ptr3);
   return 0;
}

