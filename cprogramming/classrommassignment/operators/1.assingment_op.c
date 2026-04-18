/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 03-12-25
*Program              : assigning value 
*Sample Input         : Enter the values2 3
*Sample Output        : a =3
                        a =3
                        b =3
*
*************************************************************************/


#include <stdio.h>

int main()
{   
    int a,b;                            //declare variable
	printf("Enter the values");        
	scanf("%d%d",&a,&b);               //reading inputs from user
	printf("a =%d\n ",a=b);            //b value is assigning to a variable
	printf("a =%d\n",a);               // a value is printing
	printf("b =%d\n",b);               // b value is printing
    return 0;
}

