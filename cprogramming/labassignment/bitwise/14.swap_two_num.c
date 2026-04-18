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
	int num1,num2,size;
	printf("Enter num1 and num2: ");
	scanf("%d %d",&num1,&num2);
	size=sizeof(num1);
	printbinary(num1,size);
	printbinary(num2,size);
	num1=num1 ^ num2;
	num2=num1 ^ num2;
	num1=num1 ^ num2;
	printbinary(num1,size);
	printbinary(num2,size);
	
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
