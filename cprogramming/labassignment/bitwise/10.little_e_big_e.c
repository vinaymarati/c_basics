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
	int num,size,a,b,c,d;
	printf("Enter the hexa number: ");
	scanf("%x",&num);
	size=sizeof(num);
	printbinary(num,size);
	a=(num & 0xff000000)>>24;
	b=(num & 0x000000ff)<<24;
	c=(num & 0x00ff0000)>>8;
	d=(num & 0x0000ff00)<<8;
	num=(((a|b)|c)|d);
	printbinary(num,size);
   return 0;
}
void printbinary(int num,int size)
{
	int count=0,i;
	size=size*8-1;
	for(i=size;i>=0;i--)
	{
		if(num & 0x1<<i)
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

