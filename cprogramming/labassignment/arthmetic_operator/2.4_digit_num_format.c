/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-12-25
*Program              :
*Sample Input         : Enter the 4 Digit Number: 4532
*Sample Output        : Enter the 4 Digit Number: 4532
 						specified format 1
						2
						3
						5
						4
						Specified format 2:
						4
						5
						3
						2
						Specified format 3:
						4
						45
						453
						4532
						Specified format 4:
						4532
						453
						45
						4
						Specified format 5:
						2354
						specified format 6:
						   2
						  3
						 5
						4

*
*************************************************************************/


#include <stdio.h>
int num,q1,r1,q2,r2,q3,r3;                           //Declare the Variables q=quotient r=remainder num=userinput       
int main()
{
	printf("Enter the 4 Digit Number: ");           
	scanf("%d",&num);                                      //Read the input from user 'num' ex:4532
	q1=num/10;                                             //num/10 will get q1:453
	r1=num%10;                                             //num%10 will get r1 : 2
	q2=q1/10;                                              //q1/10  will get q2 : 45
	r2=q1%10;                                              //q1%10  will get r2 : 3
	q3=q2/10;                                              //q2/10  will get q3 : 4
	r3=q2%10;                                              //q2%10  will get r3 : 5
	printf("specified format 1\n");
	printf("%d\n%d\n%d\n%d\n",r1,r2,r3,q3);                
	printf("Specified format 2:\n");
	printf("%d\n%d\n%d\n%d\n",q3,r3,r2,r1);
	printf("Specified format 3:\n");
	printf("%d\n%d\n%d\n%d\n",q3,q2,q1,num);
	printf("Specified format 4:\n");
	printf("%d\n%d\n%d\n%d\n",num,q1,q2,q3);
	printf("Specified format 5:\n");
	printf("%d%d%d%d\n",r1,r2,r3,q3);
	printf("specified format 6:\n");
	printf("%4d\n%3d\n%2d\n%d\n",r1,r2,r3,q3);            // Here %4d 4 is width if length of number is less than width no stores from last
    return 0;
}

