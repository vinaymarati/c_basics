/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 19-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{
	int n,total_marks=0,s,a=1,k=1,i=1,percentage,per=0,per1=0,std_id;
	printf("Enter the n students");
	while(a)
	{
		scanf("%d",&n);
		while(getchar()!='\n');
		if(n>0)
		{
			a=0;
		}
		else
		{
			printf("Enter the valid Number");
		}
	}
	while(i<=n)
	{
		printf("Enter the 6 subject marks: ");
		k=1;
		while(k<=6)
		{
			while(!scanf("%d",&s))
			{
				printf("Enter valid subjects marks" );
				while(getchar() !='\n');
			}
			total_marks+=s;
			
			k++;
		}
		percentage=total_marks/6;
		per1=percentage;
		if(per1>per)
		{
		per=per1;
		std_id=i;
		}
		i++;
	}
	printf("Topper studentID is %d",std_id);
   return 0;
}

