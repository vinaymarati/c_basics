/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 23-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdio.h>
int printf(const char *,...);
int scanf(const char*,...);
int (*myprintf)(const char *,...) = printf;
int (*myscanf)(const char *,...)= scanf;


int main()
{
	int i=0,j,k;
     myprintf("Enter three integer nubmers ");
	 myscanf("%d %d %d",&i,&j,&k);
     myprintf("\n%d %d %d",i,j,k);
	
	

		return 0;

}
