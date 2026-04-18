/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 16-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
void *malloc(size_t);
char *itoa(int n,char *str);
int main()
{
	char *str;
	int num;
	printf("Enter the Integer");
	scanf("%d",&num);
	
	printf("%s",itoa(num,str));
	
   return 0;
}
//this function converts the integer to string and return base address of string
char * itoa(int n,char *str)
{
	int i=0,a=n;
	
	while(n)
	{
		n=n/10;
		i++;
	}
	//memory is allocated for string in heap 
	str=(char *)malloc(i*sizeof(char));
	*(str+i)='\0';
	i--;
	while(a)
	{
		*(str+i)=(a%10)+'0';
		i--;
		a/=10;
	}
	return str;
		
} 
