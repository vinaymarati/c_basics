i/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 09-12-25
*Program              : percentage of student for six subjects
*Sample Input         : Enter the marks of six subjects: 70 80 80 70 60 79
*Sample Output        : total_percentage: 73.000000
				First Division
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int s1,s2,s3,s4,s5,s6;
	float total_per;                                                           //total_per = total_percentage
	printf("Enter the marks of six subjects: ");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	total_per=(s1+s2+s3+s4+s5+s6)/6;
	if(total_per >=80  && total_per <=100)
	{	
		printf("total_percentage: %f\n",total_per);
		printf("Honours");
		
	}
	else if (total_per >=60 && total_per <=79)
	{	
		printf("total_percentage: %f\n",total_per);
		printf("First Division");
	}
	else if (total_per >=50 && total_per <=59)
	{	
		printf("total_percentage: %f\n",total_per);
		printf("second Division");
	}
	else if (total_per >=40 && total_per <=49)
	{	
		printf("total_percentage: %f\n",total_per);
		printf("Third Division");
	}
	else
	{	
		printf("total_percentage: %f\n",total_per);
		printf("Fail");
	}
   return 0;
}

