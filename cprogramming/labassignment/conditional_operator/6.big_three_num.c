/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 04-12-25
*Program              : Biggest of three numbers
*Sample Input         : Enter the Number23 45 60
*Sample Output        : c : 60 is greater
*
*************************************************************************/


#include <stdio.h>
int a,b,c;                                       //Declare the variables as int
int main()
{
 	printf("Enter the Number");
	scanf("%d%d%d",&a,&b,&c);                    //Read the input from user
	if(a>b)                                      // if true goto if block
	{ 
		if(a>c)                                  // if condition true statement execute
		{	printf("a : %d is greater",a); 
			
		}                                        
		else{                                     //if condition false c is greater
			printf("c : %d is greater",c);
			}
	}
	else if(b>c)                                  // if condition true print b is greater
		{	printf("b : %d is greater",b);
			
		}
		else{ printf("c : %d is greater",c);     // if condition false c is greater
			}

   return 0;
}

