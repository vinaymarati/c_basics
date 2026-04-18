/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-12-25
*Program              : Read the n numbers from user and prints the number is alphabet or digit or special character
*Sample Input         : Enter the Number: 3
*Sample Output        :	Enter the valid Integral Value
						Enter the character
						2
						The given character 2 is a Numaric character
						Enter the character
						e
						The given character e is a small Alphabet
						Enter the character
						a
						The given character a is a small Alphabet
*************************************************************************/


#include <stdio.h>

int main()
{
	int n,i=1;
	char c;
	printf("Enter the Number: ");
	//Input validation user entered is integer or not
	while(!(scanf("%d",&n)))
				{	
				printf("Enter the valid Integral Value\n");
				while(getchar() != '\n');
				}
				while(i<=n)
				{	
				printf("Enter the character: ");
				scanf(" %c",&c);
				//print it is digit
				if((c>=48) && (c<=57) )
				{	
				printf("The given character %c is a Numaric character\n",c);
				}
				//print  it is upper alphabet
				else if((c>=65) &&  (c<=90) )
				{	
				printf("The given character %c is a capital Alphabet\n",c);
				}
				//print it is lower alphabet
				else if((c>=97) && (c<=122))
				{		
				printf("The given character %c is a small Alphabet\n",c);
				}
				//print it is special character
				else
				{	
					printf("The given character is %c is a special character\n",c);
				}
				i++;
				}


   return 0;
}

