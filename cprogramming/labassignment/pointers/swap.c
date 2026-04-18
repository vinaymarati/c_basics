/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
void swap(int *p)
{
 	int temp;
	temp=*p;
	*p=*(p+1);
	*(p+1)=temp;
}

