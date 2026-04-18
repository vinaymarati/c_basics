/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-12-25
*Program              : Given character is vowel or not
*Sample Input         : Enter the character: h
*Sample Output        : It is not vowel h
*
*************************************************************************/


#include <stdio.h>
char c;                                                                  //Decalre variable as char
int main()
{	
	printf("Enter the character: ");
	scanf("%c",&c);                                                      //Read input from user
	
	//Vowels(a,e,i,o,u) It compare char with each vowel.if  it  is vowel print vowel otherwise It is not Vowel
	
 	c=='a'?printf("It is vowel %c",c):c=='A'?printf("It is vowel %c",c):
	c=='e'?printf("It is vowel %c",c):c=='E'?printf("It is vowel %c",c):
	c=='i'?printf("It is vowel %c",c):c=='I'?printf("It is vowel %c",c):
	c=='o'?printf("It is vowel %c",c):c=='O'?printf("It is vowel %c",c):
	c=='u'?printf("It is vowel %c",c):c=='U'?printf("It is vowel %c",c):printf("It is not vowel %c ",c);
 	

   return 0;
}

