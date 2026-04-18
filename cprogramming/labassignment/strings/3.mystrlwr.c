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
int i,size;
void mystrlwr(char str[]);
int main()
{
	printf("Enter the size: ");
	scanf("%d",&size);
	char str[size];
	printf("\nEnter the string: ");	
	getchar();
	scanf("%[^\n]s",str);
	mystrlwr(str);
   return 0;
}
void mystrlwr(char str[])
{
	while(str[i]!=0)
	{
		if((str[i]>=65) && (str[i]<=90))
		{
			str[i]+=32;
		}
		i++;
	
	}
	str[i]='\0';
	puts(str);
}

