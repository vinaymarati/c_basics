/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int strcmp(char *str1,char *str2);
int main()
{
	
	char str1[15];
	char str2[15];
	printf("Enter the str1: ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("Enter the str2: ");
	scanf("%[^\n]s",str2);
	int ret=strcmp(str1,str2);
	//if function return 0 both are same
	printf("Difference %d\n",ret);
	if(!ret)
	{
		printf("Both are same");
	}
	else
	{
		printf("Both are not same");
	}
	

	
   return 0;
}
//function compare the two strings 
int strcmp(char *str1,char *str2)
{
	
	while(*str1 || *str2)
	{
		if(*str1 != *str2)
		{
			return *str1-*str2;
		}
		//increments the pointer to next address
		str1++;
		str2++;	
	}
	return 0;
}

