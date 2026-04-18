/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : Character is alphabet or not
*Sample Input         : Enter the character: c
*Sample Output        : It is a Alphabet
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	if((c>=65) && (c<=90) || (c>=97) && (c<=122))
	{	
		printf("It is a Alphabet");
	}
	else
	{	
		printf("It is not Alphabet");
	}	

   return 0;
}

