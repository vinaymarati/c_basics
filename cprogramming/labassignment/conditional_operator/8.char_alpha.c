/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Read a character and print character is alphabet or not
*Sample Input         : Enter the charactera
*Sample Output        : It is alphabet
*
*************************************************************************/


#include <stdio.h>
char c;
int main()
{
	printf("Enter the character : ");
	scanf("%c",&c);
	if(c>=65)
	{	if(c<=90)
		{	printf("It is alphabet");
		}
		else if(c>=97)
		{	if(c<=122)
			{	printf("It is alphabet");
			}
			else
			{	printf("It is Not Alphabet");
			}
		}
	}
	else
		printf("It is Not Alphabet");
   return 0;
}

