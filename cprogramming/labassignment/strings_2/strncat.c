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

void mystrncat(char d[],char s[],int n)
{
	int i=0,j=0;
	long double size;
	size=sizeof(d);
	while(i<size && d[i]!='\0')
	{
		i++;
	}
   
	if(i==size)
	{
		printf("%s",d);
		return;
	}
	while(j<n && d[i]!=0 && s[j]!=0)
	{
		d[i]=s[j];
		i++;
		j++;

	}
	d[i]='\0';
	printf("%s",d);
}

