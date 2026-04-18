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
char *mystrcat(char *d ,char *s);
int mystr_len(char *d);

int main()
{
	char des[20];
	char src[20];
	printf("Enter the destination str: ");
	scanf("%[^\n]s",des);
	getchar();
	printf("\nEnter the source str: ");
	scanf("%[^\n]s",src);
	char *c=mystrcat(des,src);
	printf("%s",c);
   return 0;
}

char *mystrcat(char *d ,char *s)
{

	int d_len=0;
	d_len=mystr_len(d);
	printf("\n length: %d\n",d_len);
	while(*s)
	{
		
		*(d+d_len)=*s;
		d_len++;
		s++;
	}
	return d;
		

		
}
int mystr_len(char *d)
{
	int i=0;
	while(*d)
	{
		i++;
		d++;
	}
	return i;
}
