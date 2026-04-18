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
int mystr_len(char *str);
char *mystrrev(char *str);


int main()
{
	
	char str[15];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	
	//printf("%s\n",str);
	char *s=mystrrev(str);
	printf("%s\n",s);
	printf("%p",s);
	
   	return 0;
}
char *mystrrev(char *str)
{
	int len=0,i=0,j=0;
	len= mystr_len(str);
	j=len-1;
	while(i<j)
	{
		char temp=*(str+i);
		*(str+i)=*(str+j);
		*(str+j)=temp;
		i++;
		j--;
	}
	
return str;
	
	
}

int mystr_len(char *str)
{
	int i=0;
	while(*(str+i))
	{
	i++;
	}
	return i;
}




