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
char *mystrlwr(char *s);

int main()
{
	
	char str[20];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	char *c=mystrlwr(str);
	printf("\n%s",c);
	
   return 0;
}
char *mystrlwr(char *s)
{	
	char *p=s;
	 while(*p)
	{
		if( *p>=65 && *p<=90)
		{
			*p=*p+32;
		}
		p++;
	}
	return s;
}
