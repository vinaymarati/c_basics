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
void calcfunbyr(int a,int b,int *pa,int *ps,int *pm,int *pd,int *pr);
int main()
{
	int a,b,add,sub,mul,div,rem;
	printf("\nEnter the values of a & b: ");
	scanf("%d%d",&a,&b);
	calcfunbyr(a,b,&add,&sub,&mul,&div,&rem);
	printf("\na=%d,b=%d, add=%d,sub=%d,mul=%d,div=%d,rem=%d",a,b,add,sub,mul,div,rem);
	
   return 0;
}
void calcfunbyr(int a,int b,int *pa,int *ps,int *pm,int *pd,int *pr)
{
*pa=a+b;
*ps=a-b;
*pm=a*b;
*pd=a/b;
*pr=a%b;
}
