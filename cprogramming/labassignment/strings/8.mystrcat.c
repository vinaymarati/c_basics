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
void mystrcat(char d[],char s[]);
int main()
{
	char d[20];
	char s[20];
	printf("Enter the string : ");
	scanf("%s",d);
	printf("\nEnter the string: ");
	scanf("%s",s);
	mystrcat(d,s);	
   return 0;
}
 
void mystrcat(char d[],char s[])
{
int i=0,j=0;
while(d[i]!='\0' )
{
i++;

}
while(s[j]!='\0')
{
d[i]=s[j];
i++;
j++;
}
puts("concatination");
puts(d);
}
