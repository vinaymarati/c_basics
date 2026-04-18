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
void printbinary(int ,int);
int set_bits(int x,int y,int n,int p)
{
	int mask_n;

	int size=sizeof(mask_n);
	mask_n=(0x01<<n)-1;						//generic 
											//mask_n=0x07; hardcode
	printbinary(mask_n,size);
	printf("Extracting right most n bits.........y \n");
	int  right_bits=y & mask_n;
	printbinary(right_bits,size);
	printf("shift right bits to correct position.....\n");
	int shift_bits=right_bits << p-n ;
	printbinary(shift_bits,size);
	printf("Clearing the bits from  position to n  bits......\n");
	int clear_mask=~(mask_n<<p-n);
	int x_clear_bits=x & clear_mask;
	printbinary(x_clear_bits,size);
	printf("Changing the bits of x:.....\n");
	int result = x_clear_bits | shift_bits;
	printbinary(result,size);
	return 0;
	
}
void printbinary(int num,int size)
{
	size=size*8-1;
	size=8-1;
	
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
	printf("\n");
}
int main()
{
	int x,y,n,p;
	printf("Enter the numbers x and y:");
	scanf("%d %d",&x,&y);
	printf("\nEnter the position of bit:");
	scanf("%d",&p);
	printf("\nEnter the no of bits: ");
	scanf("%d",&n);
	int size=1;
	printbinary(x,size);
	printbinary(y,size);
	set_bits(x,y,n,p);
return 0;
}
