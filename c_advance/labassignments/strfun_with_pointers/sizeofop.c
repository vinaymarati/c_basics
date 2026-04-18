/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#define SIZEOF(x)  ((char *)(&x + 1)) - ((char *)(&x))

int main()
{
	char c='a';
	float a=12.3;
	double b=12;
	int arr[10]={1,2,3,4,5};
	printf("size of char :%lu",SIZEOF(c));
	printf("\nsize of float: %lu",SIZEOF(a));
	printf("\nsize of double:%lu",SIZEOF(b));
	printf("\nsize of arr %lu",SIZEOF(arr));


  	 return 0;
}

