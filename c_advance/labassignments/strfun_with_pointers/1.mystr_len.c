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

int main()
{
	int i=0;
	char str[]="VINAYMARATI";
	
	printf("%s\n",str);

i=mystr_len(str);
printf("length:%d",i);

   return 0;
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

