/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Read a character print the Digit
*Sample Input         : Enter the character: 6
*Sample Output        : It is a digit
*
*************************************************************************/


#include <stdio.h>
char c;
int main()
{	printf("Enter the character: ");
	scanf("%c",&c);
	if(c>=48)
	{	if(c<=57)
		{	printf("It is a digit");
		}
		else
		{	printf("It is not a digit");
		}
	}
	else 
		printf("It is not a digit");

   return 0;
}

