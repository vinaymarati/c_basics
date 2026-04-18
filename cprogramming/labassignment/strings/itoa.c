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
void itoa(int,int);
int main()
{ int a,i=0,k;
	printf("Enter the integer: ");
	scanf("%d",&a);
	k=a;
	while(a>0)
	{
	a=a/10;
	i++;
	}
	itoa(k,i);
   return 0;
}
void itoa(int k,int i)
{

char str[i];
str[i]='\0';
i--;
while(k>0)
{
str[i]=(k%10)+'0';
k=k/10;
i--;
}
printf("%s",str);
}

