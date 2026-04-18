/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 29-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int n,i,k;
int main()
{
	printf("Enter the Integer: ");
	scanf("%d",&n);
	int m=n;
	for(i=0;n>0;i++)
	{
		n=n/2;
		
	}
	k=i;
	printf("%d",k);
	int arr[k];
	for (i=k-1;i>=0;i--)
	{
		arr[i]=m%2;
		printf("%d",arr[i]);
		m/=2;
	}
	printf("\nThe given number in binary: ");
	for(i=0;i<k;i++)
	{
		printf("%d",arr[i]);
	} 
   return 0;
}

