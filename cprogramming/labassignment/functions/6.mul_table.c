/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              : multiplication table
*Sample Input         : Enter the value 5

*Sample Output        : 5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

*
*************************************************************************/


#include <stdio.h>
void mul_function(int x)
{
	int i=1;
	while(i<=10)
	{
		printf("%d * %d = %d\n",x,i,x*i);
		i++;
	}

}
int main()
{
	int a;
	printf("Enter the value ");
	scanf("%d",&a);
	mul_function(a);
	return 0;
}

