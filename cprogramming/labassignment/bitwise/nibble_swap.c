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
	int num,size,a,b;
	size=sizeof(num);	
	printf("Enter the hexa number : ");
	scanf("%x",&num);
	printbinary(num,size);
	a=(num & 0xf0)>>4;
	b=(num & 0x0f)<<4;
	num =a|b;
	printbinary(num,size);
   return 0;
}
void printbinary(int num,int size)
{

	size=size*8-1;
	int count=0,i;
	for(i=size;i>=0;i--)
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
	printf("\n");


}

