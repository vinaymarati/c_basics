/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 24-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
/*Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal. */

#include <stdio.h>
#include <string.h>
//declaration of struct datatype (user defined datatype)
struct student {

	int id;
	char name[10];
	float marks;
   };

int main()
{
	//declaration of struct variable datatype(struct)
	struct student stuarr[2];
	printf("Enter the students data: ");
	
	for(int i=0;i<2;i++)
	{
		printf("\nDetails of student %d : ",i+1);
		printf("\nEnter the id:");
		scanf("%d",&stuarr[i].id);
		getchar();
		printf("\nEnter the name: ");
		scanf("%[^\n]s",stuarr[i].name);
		printf("\nEnter the marks: ");
		scanf("%f",&stuarr[i].marks);
	}
	
	//compare the two structures of variables of members
	if(stuarr[0].id==stuarr[1].id && stuarr[0].marks==stuarr[1].marks && (strcmp(stuarr[0].name,stuarr[1].name)==0))
	{
		printf("\nBoth are students are same");
	}
	else
	{
		printf("\nBoth students are not same");
	}

	/*for(int i=0;i<2;i++)
	{
		printf("\nDetails of student %d : ",i+1);
		printf("\nthe id:");
		printf("%d",stuarr[i].id);
		printf("\n the name: ");
		printf("%s",stuarr[i].name);
		printf("\n the marks: ");
		printf("%f",stuarr[i].marks);
	}*/



   return 0;
}

