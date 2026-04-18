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
int atoi(char str[]);
int main()
{
int n,ret;
printf("Enter the size: ");
scanf("%d",&n);
char str[n];
printf("\nEnter the string: ");
getchar();
scanf("%[^\n]s",str);
ret=atoi(str);
printf("%d",ret);
printf("\n%d",ret+2);
   return 0;
}
int atoi(char str[])
{
int i=0,j=10,sum=0;
while(str[i])
{
sum=sum*j+str[i]-'0';
i++;
}
return sum;
}

