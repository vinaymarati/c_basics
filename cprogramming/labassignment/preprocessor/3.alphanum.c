/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 06-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#define ISLOWER(c) (c>=97 && c<=122)
#define ISUPPER(c) (c>=65 && c<=90)
#define IS_ALPHA(c) ((ISLOWER(c)) || (ISUPPER(c)))
#define IS_NUM(c) (c>=48 && c<=57)
#define IS_ALPHA_NUM(c) ((IS_ALPHA(c)) || (IS_NUM(c)))
int main()
{
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	if(IS_ALPHA_NUM(c))
	{
		printf("It is aphanumeric");
	}
	else
	{
		printf("It is special character");
	}
   return 0;
}

