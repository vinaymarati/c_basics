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
int i;
int mystrlen(char str[]);
int main()
{
	printf("Enter the string : ");
	char str[15];
	scanf("%15[^\n]s",str);
	int result;
	result=mystrlen(str);
	printf("\nmy string length %d",result);
   return 0;
}
int mystrlen(char str[])
{
while(str[i]!=0)
{
i++;
}
return i;
}

