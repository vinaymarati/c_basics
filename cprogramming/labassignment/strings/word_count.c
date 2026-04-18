/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 31-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int wordcount(char str[]);
int main()
{
	char str[200];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	int ret=wordcount(str);
	printf("Word count %d",ret);
   return 0;
}
int wordcount(char str[])
{
int i=0,j=0,n=0,count=0;
while(str[i]!=0)
{
i++;
n++;
}
printf("%d %d",i,n);
i=0;
while(i<n)
{
if((str[i]=='?')||(str[i]=='.')||(str[i]==' '))
{
count++;
}
i++;
}
return count;
}
