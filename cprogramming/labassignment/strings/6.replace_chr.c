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
int replacechar(char str[]);
char str[10];
int main()
{
	
	printf("Enter the string: ");
	scanf("%s",str);
	printf("%s",str);
	replacechar(str);
	
   return 0;
}

int replacechar(char str[])
{
	int i=0,j=0;
	while(str[i]!=0)
	{
		i++;
	}
	j=i;
	for(i=0;i<j;i++)
	{
		switch(str[i])
		{
			case '1':printf("one ");
					break;
			case '2': printf("two ");
					break;
			case '3': printf("three ");
					break;
			case '4': printf("four ");
					break;
			case '5':printf("five ");
				   break;	
			case '6': printf("six ");
					break;
			case '7':printf("seven ");
				   break;
			case '8':printf("eight ");
				   break;
			case '9':printf("nine ");
				   break;
			case '0': printf("zero ");
					break;
		}

	}
return 0;
}
