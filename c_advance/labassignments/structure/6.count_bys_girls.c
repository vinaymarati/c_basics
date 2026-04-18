/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 24-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

struct student
{
 	int id;
	char name[10];
	int rollno;
	char gender;
};
int count_boys_girls(struct student arr[],int n);

int boys,girls;
int main()
{
	
	struct student stuarr[5];
	printf("Enter the 5 students details\n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the student: %d details\n",i+1);
		printf("Enter the id: ");
		scanf("%d",&stuarr[i].id);
		getchar();
		printf("\nEnter the name: ");
		scanf("%[^\n]s",stuarr[i].name);
		printf("\nEnter the rollno: ");
		scanf("%d",&stuarr[i].rollno);
		printf("\nEnter the gender: ");
		getchar();
		scanf("%c",&stuarr[i].gender);
	}
	
	count_boys_girls(stuarr,5);
	printf("\nBoys: %d,Girls: %d ",boys,girls);
	
   return 0;
}
//function takes the arguments as struct variable as array and no of students 
//check the boys,girls and increment the count 
int count_boys_girls(struct student arr[],int n)
{

	for(int i=0;i<n;i++)
	{
		
		if(arr[i].gender=='M')
		{
			boys++;
		}
		if(arr[i].gender=='F')
		{
			girls++;	
		}
		
	} 
	return 0;	
}
