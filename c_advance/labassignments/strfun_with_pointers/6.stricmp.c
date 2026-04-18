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
int stricmp(char *s1,char*s2);
int main()
{

	char str1[15];
	char str2[15];
	int ret=0;
	
	printf("Enter the str1: ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("Enter the str2: ");
	scanf("%[^\n]s",str2);
	ret=stricmp(str1,str2);
	printf("Difference of two characters : %d",ret);
	if(!ret)
	{
		printf("Both are same");
	}
	else
	{
		printf("Both are not same");
	}
   return 0;
}

int stricmp(char *s1,char *s2)
{
	while( *s1 || *s2)
	{
		if( (*s1 != *s2) && (*(s1+32) != *s2) &&  (*s1-32 !=*(s2)))
		{
			return *s1-*s2;
		}
		s1++;
		s2++;
		
	}
	return 0;
}
