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
	printf("Enter the three Numbers: ");
	int a,b,c,d;
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	scanf("%d%d%d",ptr1,ptr2,ptr3);
	int *bigptr=&d;
	*bigptr=*ptr1;
	if(*ptr2>*bigptr)
	{
		*bigptr=*ptr2;


	}
	if(*ptr3>*bigptr)
	{
		*bigptr=*ptr3;
	}
	printf("%d is big",*bigptr);
   return 0;
}

