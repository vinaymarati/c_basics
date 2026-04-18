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
void mystrrev(char str[]);
int main()
{
	char str[20];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	mystrrev(str);

	return 0;
}
void mystrrev(char str[])
{
	int i=0,j=0;
	while(str[i]!=0)
	{
		i++;
	}
	j=i-1;   //last index
	i=0;
	while(i<j)
	{	char temp;
		  temp=str[i];
		  str[i]=str[j];
		  str[j]=temp;
		  i++;
		 j--;
	
	}
	puts(str);
}

