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


char *mystrcpy(char *d,char *s);

int main()
{
	char s[10];
	char d[20];

	printf("Enter the source string: ");
	scanf("%[^\n]s",s);
	getchar();
	printf("\nEnter the destination string: ");
	scanf("%[^\n]s",d);
	char *c=mystrcpy(d,s);
	printf("sourc copied to destination : ");
	printf("%s",c);
	

	
   return 0;
}

char *mystrcpy(char *d,char *s)
{
	int i=0;
	while(*(s+i))
	{
		*(d+i)=*(s+i);
		i++;	
	}
	*(d+i)='\0';
	return d;
}
