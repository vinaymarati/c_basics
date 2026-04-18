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
char *mystrcpy(char *d,char *s);
char  *ptrcpy(char *d,char *s);
int main()
{
	char *s1,*s2;
	s1=(char *)malloc(6*sizeof(char));
	if(s1==NULL)
	{
		printf("MEMEORY IS NOT ALLOCATED");
		return 0;
   }
	printf("\nAddress str1:%p\n",s1);
	mystrcpy(s1,"KERNEL");
	printf("\nAddress str1:%p\n",s1);
	s2=(char *)malloc(6*sizeof(char));
	if(s2==NULL)
	{
		printf("MEMORY IS NOT ALLOCATED");
		return 0;
v	}
	printf("\nAddres str2:%p\n",s2);
	mystrcpy(s2,s1);
	printf("\nAddress str2: %p\n",s2);
	printf("%s\n",s1);
	printf("%s\n",s2);

   return 0;
}

char *mystrcpy(char *d,char *s)
{
	int i=0;
	while(*(s+i)!='\0')
	{
		*(d+i)=*(s+i);
		i++;	
	}
	*(d+i)='\0';
	return d;
}

char *ptrcpy(char *d,char *s)
{
 	char *p=d;
	while(*p++=*s++);
	return d;
}

