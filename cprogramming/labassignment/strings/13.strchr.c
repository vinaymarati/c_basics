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
int mystrchr(char str[],char ch);
int main()
{	int result;
	char str[20],ch;
	printf("Enter the string: ");
	scanf("%s",str);
	printf("\nEnter the character: ");
	scanf(" %c",&ch);
	result=mystrchr(str,ch);
	printf("\nindex of element %d",result);
   return 0;
}
int mystrchr(char str[],char ch)
{
int i=0,j=0,a=0;
while(str[i]!=0)
{
if(str[i]==ch)
{
	a=i;
	break;
}
i++;
}
/*for(j=0;j<i;j++)
{
	if(str[j]==ch)
	{
		a=j;
		break;
	}
} */
return a;
}

