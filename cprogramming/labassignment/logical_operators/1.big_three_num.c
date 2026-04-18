/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : Biggest of three numbers
*Sample Input         : Enter the Numbers12 6 10
*Sample Output        : 12 is greater
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int n1,n2,n3;                              //Declare variables as int 
	printf("Enter the Numbers");
	scanf("%d%d%d",&n1,&n2,&n3);               //Read input from user
	if (n1>n2 && n1>n3)                        //comparing n1 with n2 and n3 with logicalAND 
	{	
		printf("%d is greater",n1);
	}
	else if (n2>n3)
	{	
		printf("%d is greater",n2);
	}
	else
	{	
		printf("%d is greater",n3);
	}
   return 0;
}

