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
//function takes str1,str2, m,n(no of characters to concat)
char *mystrconcat(char *str1,char*str2,int m,int n);

int main()
{	
	char str1[10],str2[10],*sptr;
	int m,n;
	printf("Enter the string 1: ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("\nEnter the string 2: ");
	scanf("%[^\n]s",str2);
	getchar();
	printf("\nEnter the number of characters concat  from str1 and str2: ");
	scanf("%d%d",&m,&n);
	
	sptr=mystrconcat(str1,str2,m,n);
	printf("%s",sptr);

   return 0;
}
/*function concates the first m,n characters from the two strings for new string and 
the new string is allocated in heap area */
char *mystrconcat(char *str1,char*str2,int m,int n)
{	int i=0,j=0,l=m+n;
	char *str=(char *)malloc(l*sizeof(char));
	if(str==NULL)
	{
		printf("Memory is not allocated");
		exit(0);
	}
	for(i=0;i<m;i++)
	{
		*(str+i)=*(str1+i);	
	}	
	for(j=0;j<n;j++)
	{
		*(str+i)=*(str2+j);
		i++;
	}
	*(str+i)='\0';
	return str;

}


