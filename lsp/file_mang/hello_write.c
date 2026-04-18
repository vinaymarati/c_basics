/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 31-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <unistd.h>
#include<stdio.h>
int main()
{	int ret;
	
	ret=write(1,"Vinaymarati\n",2);
	printf("\n%d",ret);
   return 0;
}

