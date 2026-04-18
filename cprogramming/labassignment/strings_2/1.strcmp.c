/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 31-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include "strings_2.h"
int main()
{	char str1[20];
	char str2[20];

	printf("Enter the string1: ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("\nEnter the string2: ");
	scanf("%[^\n]s",str2);
	int ret=mystrcmp(str1,str2);
	if(!ret)
	{
		printf("Both are same");

	}
	else
	{
		printf("%d return value",ret);
	}
   return 0;
}

