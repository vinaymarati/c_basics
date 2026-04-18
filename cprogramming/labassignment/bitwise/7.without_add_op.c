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
	int num1,num2;
	int size;

	size=sizeof(int);
	printf("Enter the num1 num2: ");
	scanf("%x %x",&num1,&num2);
	printbinary(num1,size);
	printbinary(num2,size);

	printf("\naddition: %d\n",num1-(~(num2-1)));
	printbinary((num1-(~(num2-1))),size);
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
	if(count%8==0 && i!=0)
	{
		printf(" ");
	}

}
printf("\n");
}
