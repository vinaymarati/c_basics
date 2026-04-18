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
int ispalindrome(char str[]);
int main()
{	int ret=0;
	char str[20];
	printf("Enter the string: ");
	scanf("%s",str);
	ret=ispalindrome(str);
	if (ret==1)
	{	
		printf("is palindrome");
	}
	else
	{
		printf("not palindrome");
	}
   return 0;
}
int ispalindrome(char str[])
{
	int i=0,j=0,n=0;
	while(str[i]!=0)
	{
		n++;
		i++;
	}
	i=0;
	j=n-1;
	for(i=0;i<n/2;i++,j--)
	{	
		if(str[i]!=str[j])
		{
			return 0;
		}
	}
	return 1;
}
