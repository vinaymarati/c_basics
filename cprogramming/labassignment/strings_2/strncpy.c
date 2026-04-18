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
extern int n;
void mystrncpy(char str1[],char str2[],int n)
{
	int i=0;
	while(i<n && (str1[i]!=0) && (str2[i]!=0))
	{
	
	str1[i]=str2[i];
	i++;	
	}
	while(i<n)
	{
		str1[i]='\0';
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);
}

