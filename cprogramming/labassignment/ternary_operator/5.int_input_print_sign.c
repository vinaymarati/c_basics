/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              : Integer as input print it is positive or not if negative print positive remove sign
*Sample Input         : Enterthe Number : 5
*Sample Output        : It is positive Number : 5
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int a;                                             	//Declare variables
	printf("Enterthe Number : ");

	//Read inputfrom user if it is only INTERGER otherwise it prints invalid

	if (scanf("%d",&a) !=1)                            
	{	
		printf("It is invalid :%d",a);
		return 0;
	}
	a>0?printf("It is positive Number : %d",a):
	a<0?printf("It is Negative  Number: %d",-a):
	printf("It is zero: %d",a);

   return 0;
}

