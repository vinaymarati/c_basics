/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int fun_alpha_num(char c)
{
	int result;
	if((c>=48 && c<=57)||(c>=65 && c<=90)||(c>=97 && c<=122))
	{
		result=1;
	}
	else
	{
		result=0;
	}
	return result;
}


int main()
{
	char c;
	int result;
	printf("Enter the character");
	scanf("%c",&c);
	result=fun_alpha_num(c);
	if(result)
	{
		printf("%c is alpha_numeric",c);
	}
	else
	{
		printf("%c is not apha_numeric",c);
	}
	return 0;
}

