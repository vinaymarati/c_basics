/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 07-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	for (size_t j = 0; j < argc; j++)
		printf("argv[%zu]: %s\n", j, argv[j]);

	exit(EXIT_SUCCESS);
}

