/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 31-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <unistd.h>

int main()
{
	if((write(1,"Here is some data\n",18)))
	write(2,"ERROR",7);

   return 0;
}

