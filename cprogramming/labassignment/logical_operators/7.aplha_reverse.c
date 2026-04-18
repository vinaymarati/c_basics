/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : Reverse of Character
*Sample Input         : Enter the Character: V
*Sample Output        : v is reverse
*
*************************************************************************/


#include <stdio.h>

int main()
{
	char c;
	printf("Enter the Character: ");
	scanf("%c",&c);
	if(c>=65 && c<=90)
	{	
		printf("%c is reverse",c+32);
	}
	else if (c>=97 && c<=122)
	{	
		printf("%c is reverse",c-32);
	}
	else
	{	
		printf("It is Invalid");
	}
   return 0;
}

