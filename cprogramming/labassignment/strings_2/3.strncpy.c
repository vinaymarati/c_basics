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
	char str1[40];
	char str2[40];
	int n;
	printf("Enter the string 1: ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("\nEnter the string2: ");
	scanf("%[^\n]s",str2);
	printf("\nEnter the number: ");
	scanf("%d",&n);
	mystrncpy(str1,str2,n);
	
   return 0;
}

