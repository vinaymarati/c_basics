/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : Greatest of four numbers
*Sample Input         : Enter the Four Numbers: 23 45 10 40
*Sample Output        : 45 is Greater
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int n1,n2,n3,n4;                           //Declare variables as int
	printf("Enter the Four Numbers: ");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);        //Read input from user
	if ((n1>n2) && (n1>n3) && (n1>n4))             //Compare n1 with n2,n3,n4 with logicalAND
	{	
		printf("%d is Greater",n1);
	}
	else if ((n2>n3) && (n2>n4))                 //compare n2 with n3,n4
	{
		printf("%d is Greater",n2);
	}
	else if(n3>n4)                           //compare n3 with n4`
	{	
		printf("%d is Greater",n3);
	}
	else
	{	
		printf("%d is Greater",n4);
	}

   return 0;
}

