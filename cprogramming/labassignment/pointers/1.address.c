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
	int a;
	int *ptr;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	ptr=&a;
	printf("\nsize of a %lu",sizeof(a));
	printf("\nsize of ptr %lu",sizeof(ptr));
	printf("\naddress of a  %p",ptr);
	printf("\nvalue of a %d",*ptr);
	printf("\nvalue of a %d",a);
	printf("\nsize of its indirected %lu",sizeof(*ptr));

   return 0;
}

