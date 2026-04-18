/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
char *mystrchr(char *s,char c);

int main()
{
	char str[20];
	char chr;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	getchar();
	printf("\nEnter the character");
	scanf(" %c",&chr);
	char *address=mystrchr(str,chr);
	printf("\naddress of first element:%p",address);

   return 0;
}
char *mystrchr(char *s,char c)
{

	while(*s)
	{
		if(*s==c)
		{
			return s;
		}
		s++;
	}	
	return 0;
}

