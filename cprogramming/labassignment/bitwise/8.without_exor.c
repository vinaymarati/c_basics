/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 22-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
void printbinary(int,int);
int main()
{
	int a,b,size;
	printf("Enter the decimal number a and b: ");
	scanf("%d %d",&a,&b);
	size=sizeof(a);
	printbinary(a,size);
	printbinary(b,size);
	int result=((~a&b)+(a&(~b)));
	printbinary(result,size);
	
   return 0;
}
void printbinary(int num,int size)
{
	int count=0,i;
	size=8-1;
	for(i=size;i>=0;i--)
	{
		if(num & 0x01<<i)
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
	printf("\n");
}
