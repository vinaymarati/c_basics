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
int mystricmp(char str1[],char str2[])
{
	int i=0;
	while(str2[i])
	{
		if((str1[i]>='A') && (str1[i]<='Z') && (str2[i]>='A') &&(str2[i]<='Z'))
		{
			if(str1[i]!=str2[i])
				{
					return str1[i]-str2[i];
				}
		}
		else if((str1[i]>='A') && (str1[i]<='Z') && (str2[i]>='a') &&(str2[i]<='z'))
		{
			if((str1[i]+32)!=str2[i])
			{
				return (str1[i]+32)-str2[i];
			}
		}else if((str1[i]>='a') && (str1[i]<='z') && (str2[i]>='A') &&(str2[i]<='Z'))
		{
			if(str1[i]!=(str2[i]+32))
			{
				return str1[i]-(str2[i]+32);
			}
		}
		else if((str1[i]>='a') && (str1[i]<='z') && (str2[i]>='a') &&(str2[i]<='z'))
		{
			if(str1[i]!=str2[i])
			{
				return str1[i]-str2[i];
			}
		}
i++;
	}
return 0;
}

