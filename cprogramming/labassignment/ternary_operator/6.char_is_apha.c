/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              : It is alphabet or not
*Sample Input         : Enter the character :t
*Sample Output        : It is alphabet: t
*
*************************************************************************/


#include <stdio.h>

int main()
{
	char c;                                          //Declare variable as char
	printf("Enter the character");
	scanf("%c",&c);                                  //Read the input from user

	//check the ASCI of character values with the user input if the char is >65 it checks it is capital aphabet it print output
	//else it check with the ASCI values of small it is small it prints output otherwise Invalid

	c>65?c<=90?printf("It is alphabet: %c",c):
	c>=97?c<=122?printf("It is alphabet: %c",c):
	printf("It is Not alphabet: %c",c):
	printf("It is Not alphabet: %c",c):
	printf("It is Not alphabet: %c",c);
	

   return 0;
}

