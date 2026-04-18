/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : Given Character is vowel or not
*Sample Input         : Enter the character: u
*Sample Output        : It is Vowel u
*
*************************************************************************/


#include <stdio.h>

int main()
{
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	if (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
	{	
		printf("It is Vowel %c",c);
	}
	else
	{	
		printf("It is not vowel %c",c);
	}
   return 0;
}

