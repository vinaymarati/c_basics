/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 21-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
void printbinary(int,int);
int main()
{
	char d;
	printf("enter the character: ");
	scanf("%c",&d);
	d=d-48;
	printf("\ndecimal number: %d\n",d);
	int size;
	size=sizeof(d);
	printbinary(d,size);
	
   return 0;
}
void printbinary(int a,int size)
{
	size=size*8;
	int i=0,count=0;
	for(i=size-1;i>=0;i--)
	{
		if(a & (0x01<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	count++;
	if(count%4==0 && i!=0)
	{
		printf(" ");
	}
	}
	
}
