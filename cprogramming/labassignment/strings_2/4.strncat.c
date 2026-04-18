/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include "strings_2.h"
int main()
{
	char d[30],s[30];
	int n;
	printf("Enter the string1: ");
	scanf("%[^\n]s",d);
	getchar();
	printf("\nEnter the string 2: ");
	scanf("%s[^\n]s",s);
	printf("\nEnter the n value: ");
	scanf("%d",&n);
	mystrncat(d,s,n);
	
   return 0;
}

