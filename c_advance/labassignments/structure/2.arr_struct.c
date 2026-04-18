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
	

	int sub=6,j=0,i=0,count,highest =0;
	float highest_per=0;

	printf("Enter number of students ");
	scanf("%d",&count);
   
   struct student stu[count];


   while( i<count)
   {

	   printf("\nEnter the ID of the student %d ",i+1);
	   scanf("%d",&stu[i].ID);

	   printf("\nEnter Name of the student %d",i+1);   
	   scanf(" %[^\n]s",stu[i].name);

	   printf("\nEnter 6 subject marks of student  %d \n",i+1);
	   while( j<sub )
	   {
		   scanf("%d",&stu[i].marks[j]);
		   j++;
	   }
	   j=0;

	   printf("\nEnter date in dd-mm-yyyy ");
	   scanf("%d-%d-%d",&stu[i].d,&stu[i].m,&stu[i].y);

	   stu[i].per=0;

	   calc_per(stu[i].marks,&stu[i].per);

	   printf("\nEnter gender (M / F / G (Prefer not to say))\n");
	   scanf(" %c",&stu[i].gender);

	   printf("\nThe total percentage of 6 subjects is %f ",stu[i].per);
	   if(i==0)
	   {
		   highest_per= stu[i].per;

		   
	   }
	   else
	   {
           if(highest_per < stu[i].per)
		   {
			   highest_per = stu[i].per;
			   highest = i;
		   }

	   }

	   i++;



   }


   printf("\nThe student who scored the highest is %s with %3.2f perecntage ",stu[highest].name,stu[highest].per);




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


