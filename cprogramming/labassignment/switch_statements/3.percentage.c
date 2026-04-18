/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              : Student grade based on percentage
*Sample Input         : Enter the marks of six subjects10 20 10 10 10 20
*Sample Output        : Fail
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int s1,s2,s3,s4,s5,s6;
	int percentage;
	printf("Enter the marks of six subjects");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	percentage=(s1+s2+s3+s4+s5+s6)/6;
	switch(percentage)
	{	
		case 80 ... 100:printf("Honours");
				break;
		case 60 ... 79:printf("First Division");
				break;
		case 50 ... 59:printf("Second Division");
				break;
		case 40 ... 49:printf("Third Division");
				break;
		default:printf("Fail");
		
	}
   return 0;
}

