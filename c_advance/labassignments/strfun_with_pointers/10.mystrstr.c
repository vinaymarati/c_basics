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
char *mystrstr(char *str,char *sub);
int main()
{
	char str[20],sub[10];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	getchar();
	printf("\nEnter the sub string: ");
	scanf("%[^\n]s",sub);
	char *s=mystrstr(str,sub);
	printf("%s",s);
   return 0;
}

char *mystrstr(char *str,char *sub)
{
	
	int sub_len=0;
	while(*(sub+sub_len))
	{
		sub_len++;
	}
	while(*str !='\0')
	{
	 
		if(*str==*sub)
		{	
			int i=0;
			char *p=str;
			while(*(sub+i))
			{	
				if(*(p+i)!=*(sub+i))
				{
						break;
				}
				i++;
			}

			if(i==sub_len)
			{
				return str;
			}
		}
		str++;
	}	
return 0;
}
