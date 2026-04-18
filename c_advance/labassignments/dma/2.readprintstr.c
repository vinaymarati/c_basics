/********************************************************************
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
void *malloc(size_t);
int main()
{	
	void *sptr;
	//char *sptr;
	int n,i=0;
	printf("Enter the number of elements of str: ");
	scanf("%d",&n);
	sptr=(char *)malloc(n*sizeof(char));
   // sptr=malloc(n*sizeof(char));
	if(sptr==NULL)
	{
		printf("MEMEORY IS NOT ALLOCATED");
		return 0;
	}
	printf("ADDRESS %p:",sptr);
	printf("\nEnter the string: ");

	for(i=0;i<n;i++)
	{
		scanf(" %c",(char *)(sptr+i));
	}
	printf("%s",(char *)sptr);
	free(sptr);
		

   return 0;
}

