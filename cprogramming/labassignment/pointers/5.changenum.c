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
	int *ptr1,*ptr2,*ptr3,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	ptr1=&num;
	ptr2=&num;
	ptr3=&num;
	printf("\n%d of ptr1",*ptr1);
	printf("\n%d of ptr2",*ptr2);
	printf("\n%d of ptr3",*ptr3);
	printf("\nchange the num");
	scanf("%d",&num);
	printf("\n%d of ptr1",*ptr1);
	printf("\n%d of ptr2",*ptr2);
	printf("\n%d of ptr3",*ptr3);
	printf("\nchange the value using pointer 1:");
	scanf("%d",ptr1);
	printf("\n%d of ptr1",*ptr1);
	printf("\n%d of ptr2",*ptr2);
	printf("\n%d of ptr3",*ptr3);
	printf("\nchange the value using pointer 2:");	
	scanf("%d",ptr2);
	printf("\n%d of ptr1",*ptr1);
	printf("\n%d of ptr2",*ptr2);
	printf("\n%d of ptr3",*ptr3);
	

   return 0;
}

