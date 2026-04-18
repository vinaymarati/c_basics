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
int mystrcmp(char str1[],char str2[])
{

	int i=0;
	while(str2[i])
	{
		if(str1[i]!=str2[i])
		{
			return str1[i]-str2[i];
		}
		i++;
	}
return 0;
}

