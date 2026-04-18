/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-12-25
*Program              : Read input from user and print even or odd handle the error
*Sample Input         : Enter The Numbers4
*Sample Output        : 2
						Number is Even : 2
						10
						Number is Even : 10
						35
						Number is odd: 35
						43
						Number is odd: 43

*
*************************************************************************/
/* Read n numbers and print the each number is even or odd and also check whether the entered number is valid or not 
if invalid ask the user to enter the valid integer */

#include <stdio.h>

int main()
{	
	int n,num,i=1;
	printf("Enter The Numbers");
	//ask the user to enter a valid integer value if user entered is not valid.ask the user untill user enter the valid integer
	while(!(scanf("%d",&n)))
	{	
		printf("Enter the valid Integral value");
		while(getchar() != '\n');

	}
	//loop iterates untill it reaches the given number
	while(i<=n)
	{
	//Read the number untill user enter valid number
	if(!(scanf("%d",&num)))
	{	
		printf("Enter valid number");
		while(getchar() != '\n');
	}
	//it checks the number is even or odd
	else
	{	
		if(num%2==0)
		{	
			printf("Number is Even : %d\n",num);
		}
		else
		{	
			printf("Number is odd: %d\n",num);
		}
	}
	i++;
	}

	return 0;
}

