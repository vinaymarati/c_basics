/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 30-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int i,a_len,b_len,m,n;
void mystrcpy(char a[],char b[]);
int main()
{
	//printf("\nEnter the size of string: ");
	//scanf("%d",&m);
	//printf("\nEnter the size of string2 2: ");
	//scanf("%d",&n);
	char s1[20];
	char s2[10];
	printf("Enter the string1:");
	 scanf("%[^\n]s",s1);
	getchar();

	printf("Enter the string2:");
	scanf("%[^\n]s",s2);
	
	mystrcpy(s1,s2);
	
	
   return 0;
}

void mystrcpy(char s1[],char s2[])
{
	while(s2[i]!=0)
	{
		s1[i]=s2[i];
	i++;
	}
	s1[i]='\0';
	printf("%s\n",s1);
}
