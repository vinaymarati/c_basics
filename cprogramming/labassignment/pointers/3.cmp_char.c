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
	char ch1,ch2;
	char *ptr1,*ptr2;
	printf("Enter the characters ch1,ch2: ");
	scanf("%c %c",&ch1,&ch2);
	ptr1=&ch1;
	ptr2=&ch2;
	if(*ptr1>*ptr2)
	{
		printf("%d %c has the highest ascii value",*ptr1,*ptr1);
		
	}
	else
	{
		printf("%d %c has the highest ascii value",*ptr2,*ptr2);
	}
   return 0;
}

