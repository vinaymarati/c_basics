/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-12-25
*Program              : read separate three integers and convert to character print the integer value
*Sample Input         : Enter the three digits2 3 4
*Sample Output        : Integer is 234
		Adding num with 10: 244
*
*************************************************************************/


#include <stdio.h>
char  x,y,z,c='0';                                          //Declare Variables with char datatype
int num,valid;                                             //Declare Variables
int main()
{
	printf("Enter the three digits");
    int num1,num2,num3;                                    //Declare Variables as int
    /*scanf("%d%d%d",&num1,&num2,&num3);                     //Read input from user i.e Integers                  
	x=num1+c;                                                //Converting integers to characters
	y=num2+c;
	z=num3+c;*/

		
   
    scanf("%c %c %c",&x,&y,&z);                  //Read the inputs as integer
	x=x-c;                                          // to get integer ASCI value of x - ASCI value of 0 we get x int
	y=y-c;                                          //ASCI value of y - ASCI value of 0 will get x  integer
	z=z-c;                                          //ASCI value of z - ASCI value of 0 will get z integer
	num=x*100+y*10+z*1;                         // to print as integet x*hund+y*tens+z*ones
	valid=num+10;                                        // to check the output is integer by adding 10 to output value num
	printf("Integer is %d\n",num);
	printf("Adding num with 10: %d",valid);
   return 0;
}

