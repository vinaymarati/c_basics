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
	int num,size;
	size=sizeof(num);
	printf("Enter the number: ");
	scanf("%d",&num);
	printbinary(num,size);
	if( num & 0x100000)
	{
		printf("ON");
	}
	else
	{
		printf("OFF");
	}
   return 0;
}
void printbinary(int num,int size)
{
	int count=0;
	size=size*8-1;
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
printf("\n");

}

