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
	int num,size,count=0,i=0;
	printf("Enter the hexa number: ");
	scanf("%x",&num);
	printf("\ndecimal number: %d\n",num);
	size=sizeof(num);
	printbinary(num,size);
	while(i<(size*8-1))
	{
		if(num & (0x01<<i))
		{
			count++;
		}
	i++;
	}
	printf("\ncount: %d",count);


   return 0;
}
void printbinary(int num,int size)
{
	size=(size*8)-1;
	int i=0,count=0;
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
		if(count%8==0 && i!=0)
		{
			printf(" ");
		}
	}
}
