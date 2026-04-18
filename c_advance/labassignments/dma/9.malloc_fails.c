/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 17-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *block=NULL,gb=1024*1024*1024,count=0;
	while(1)
	{
	block=(int *)malloc(gb*sizeof(int));
	if(block==NULL)
	{
		printf("\nMemory allocation fail ");
		break;
	}
	printf("\nAllocated %d GB",count++);
	}
   	return 0;
}

