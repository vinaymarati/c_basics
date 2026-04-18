/*******************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 16-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#define SIZEOF(x)  ((char *)(&x+1))-((char *)(&x))
void *malloc(size_t);
int main()
{
	int *ptr,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	ptr=(int *)malloc(1*sizeof(int));
	if(ptr==NULL)
	{
		printf("SPACE IS NOT AVILABLE");
		return 0;
	}
	*ptr=n;
	printf("\nADDRESS %p",ptr);
	printf("\nNumber %d",*ptr);
	
free(ptr);
   return 0;
}

