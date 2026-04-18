/********************************************************************

*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 23-03-26
*Program              :
*Sample Input         :./a.out 10 + 20

*Sample Output        :No of arguments=4
                     a+b=30

*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
//int argc stores the no of arguments ex: ./a.out 10 + 20 > no of arg=4
//char * argv[] stores the values entered from the user 
int main(int argc,char *argv[])
{
	int a,b;
	char ch;
	printf("No of arguments=%d\n",argc);
	if(argc!=4)
	{
		printf("Not enough/excess arguments\n");
		return 0;
	}
	
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	ch=argv[2][0];
	switch(ch)
	{
		case '+':printf("Addition a and b is :%d\n",a+b);
				break;
		case '-':printf("subtraction oa a and b is:%d\n",a-b);
				break;
		case '*':printf("multiplication of a and b:%d\n",a*b);
				break;
        case '/':printf("Division of a and b:%d\n",a/b);
				break;
		case '%':printf("Modulus of a and bis: %d\n",a%b);
				break;

		default :printf("Invalid opeartion\n");

	}
	


   return 0;
}

