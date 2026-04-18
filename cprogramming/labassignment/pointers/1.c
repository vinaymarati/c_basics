/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-01-26
*Program              :
*Sample Input         :
*Sample Output        :
						5
						5
						0x58f28cf9f014
						0x58f28cf9f014
						0x58f28cf9f02
*
*************************************************************************/


#include <stdio.h>
int b=5;
int a=5;
int *p;  				//declaration of pointer
int main()
{
p=&a;                   //initalization of pointer
printf("\n%d",*p); 		//it *p will access the value of a   5 
printf("\n%d",a);  		// it will access the value of a     5
printf("\n%p",p);  		//it will print the address of a 
printf("\n%p",&a); 		//it will print the addres of a
printf("\n%p",&p);		//it will print the address of pointer p

   return 0;
}

