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
	int num1,num2;
	int *ptr1=&num1,*ptr2=&num2;
	printf("Enter the num1,num2: ");
	scanf("%d %d",ptr1,ptr2);
	printf("Sum of numbers using pointers : %d",*ptr1+*ptr2);

   return 0;
}

