/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Check It is vowel or not
*Sample Input         : Enter the char:A
*Sample Output        : It is a vowel : A
*
*************************************************************************/


#include <stdio.h>

int main()
{
	char ch;
	printf("Enter the char:");
	scanf("%c",&ch);
	switch(ch)
	{	
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': printf("It is a vowel : %c",ch);
				break;
		default: printf("It is not a vowel : %c",ch);
				break;
				
	}

   return 0;
}

