/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 24-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
void printbinary(int,int);
int main()
{
	unsigned short int num;
	printf("Enter the number: ");
	scanf("%hu",&num);
	printbinary(num,2);
	int mask_even=0x5555;
	int mask_odd=0xAAAA;
	num=(num & mask_even)<<1 | (num & mask_odd)>>1;
	printbinary(num,2);	
	
   return 0;
}
void printbinary(int num,int size)
{
	size=size*8-1;
	int count=0;	
	for(int i=size;i>=0;i--)
	{
		if(num & (0x1<<i))
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
