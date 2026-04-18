/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 25-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
struct student
{
	char name[15];
	int d,m,y;
};

int oldest_of_2(struct student stu1,struct student stu2)
{
	return (stu2.y<stu1.y) || ((stu2.y==stu1.y) && (stu2.m<stu1.m))||((stu2.y==stu1.y) && (stu2.m==stu1.m) && (stu2.d<stu1.d));
}
struct student oldest_student(struct student arr[],int n)
{
	int i=0,oldest_index=0;
	while(i<n)
	{
		if(i!=0)
		{
			if(oldest_of_2(arr[oldest_index],arr[i]))
			{
		      	oldest_index=i;
			}
		}
		i++;
	}
	return arr[oldest_index];
}

int main()
{
	int i=0,n=0;
	printf("Enter number of students: ");
	scanf("%d",&n);
	getchar();
	struct student stu[n];
	while(i<n)
	{
		printf("\nEnter Name of student %d: ",i+1);
		scanf("%[^\n]s",stu[i].name);	
		printf("\nEnter dob of student %d in dd-mm-yy: ",i+1);
		scanf("%d-%d-%d",&stu[i].d,&stu[i].m,&stu[i].y);
		getchar();
		i++;
	}
	struct student oldest=oldest_student(stu,n);
	printf("%s is the oldest \n",oldest.name);
	
   return 0;
}

