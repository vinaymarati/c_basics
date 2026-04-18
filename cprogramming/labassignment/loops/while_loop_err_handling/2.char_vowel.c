/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-12-25
*Program              : Read the number n and read character and print it is vowel or not
*Sample Input         :
*Sample Output        : Enter the Number: 3
						Enter the character:a
						It is vowel
						Enter the character:d
						It is not vowel
						Enter the character:e
						It is vowel

*
*************************************************************************/
/*Read the number n and read the n characters from user and print it is vowel or not before check the valid input or not */

#include <stdio.h>

int main()
{
	char c;
	int n,i=1;
	printf("Enter the Number: ");
	//input validation
	while(!(scanf("%d",&n)))
	{	
		printf("Enter Valid Integral Value");
		while( getchar() != '\n');
	}
	//Read the character and print vowel or not
	while (i<=n)
	{	printf("Enter the character:");
		scanf(" %c",&c);
		
		if( (c>=65) && (c<=90) || (c>=97) && (c <=122))
		{	
			if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
			{	
				printf("It is vowel\n");
			}	
			else
			{	
				printf("It is not vowel\n");
			}
		i++;
		}
	
	}
	
   return 0;
}

