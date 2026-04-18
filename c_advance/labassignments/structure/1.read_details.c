/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 23-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/



#include <stdio.h>

struct student
{
	int ID;
	char name[50];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
};

void calc_per(int marks[],float *p);

int main()
{ 
	struct student stu;

	int sub=6,i=0;

	printf("Enter the ID of the student ");
    scanf("%d",&stu.ID);
 
	printf("\nEnter Name of the student ");   
	scanf(" %[^\n]s",stu.name);

	printf("\nEnter 6 subject marks ");
	while( i<sub )
	{
		scanf("%d",&stu.marks[i]);
		i++;
	}

	printf("\nEnter date in dd-mm-yyyy ");
	scanf("%d-%d-%d",&stu.d,&stu.m,&stu.y);

	calc_per(stu.marks,&stu.per);

	printf("\nEnter gender (M / F / G (Prefer not to say))\n");
	scanf(" %c",&stu.gender);

	printf("\nThe total percentage of 6 subjects is %f ",stu.per);







		return 0;

}

void calc_per(int marks[],float *p)
{
	int i=0,sub=6;

   while( i<sub )
   {
	   *p+= marks[i];
	   i++;
	   
   }
   *p /= 6;
}


