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
	int num,size;
	printf("Enter the hexa number: ");
	scanf("%x",&num);
	printf("%d\n",num);
	size=sizeof(num);
	printbinary(num,size);
	if((num & num-1) == 0)
	{
		printf("\nPowerof two");
	}
	else
	{
		printf("\nNot power of two");

	}
   return 0;
}
void printbinary(int num,int size)
{
	size=size*8-1;
	int count=0;
	for(int i=size;i>=0;i--)
	{
		if(num & (0x01<<i))
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
