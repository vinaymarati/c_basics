/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              : Character case reverse
*Sample Input         : Enter the character : e
*Sample Output        : It is a reverse of char E
*
*************************************************************************/


#include <stdio.h>

int main()
{	char c;                                                                             //Decalre Variables as char
	printf("Enter the character : ");
	scanf("%c",&c);                                                                     //Read input from user 

	//char ASCI value is > 65 it check another condition if it is true print char of revers otherwise check with another statement
	//if given char is not present it prints not valid character
	
	c>=65?c<=90?printf("It is a reverse of char %c",c+32):                               
	c>=97?c<=122?printf("It is a reverse of char %c",c-32):printf("It is Invalid"):     
	printf("It is Invalid"):
	printf("It is Invalid");

   return 0;
}

