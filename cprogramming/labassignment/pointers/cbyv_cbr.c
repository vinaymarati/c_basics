/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-01-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
void callbyv(int a,int b);
void callbyr(int *a,int *b);
int main()
{

	int a,b;
	printf("Enter the values a and b: ");
	scanf("%d%d",&a,&b);
	printf("\na=%d,b=%d",a,b);
	callbyv(a,b);
	printf("\nAfter call by value a=%d,b=%d",a,b);
	callbyr(&a,&b);
	printf("\nAfter call by Reference a=%d,b=%d",a,b);
	
	   return 0;
}
void callbyv(int a,int b)
{
int temp=a;
a=b;
b=temp;
printf("\nAter swap a=%d,b=%d",a,b);
	
}
void callbyr(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nAfter swap a=%d,b=%d",*a,*b);
}

