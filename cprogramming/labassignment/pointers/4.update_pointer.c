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
	int num1,num2,num3,*ptr;
	printf("Enter the numbers num1,num2,num3: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	ptr=&num1;
	printf("\n%d is num1",*ptr);
	ptr=&num2;
	printf("\n%d is num2",*ptr);
	ptr=&num3;
	printf("\n%d is num3",*ptr);
   return 0;
}

