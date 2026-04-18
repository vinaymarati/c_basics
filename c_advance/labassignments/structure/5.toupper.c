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

struct student {
	int id;
	char name[15];
	char add[15];;

};
void to_upper(struct student arr[],int n);
int main()
{
	
	struct student stuarr[10];
	printf("Enter the 5 students details\n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the student: %d details\n",i+1);
		printf("Enter the id: ");
		scanf("%d",&stuarr[i].id);
		getchar();
		printf("\nEnter the name: ");
		scanf("%[^\n]s",stuarr[i].name);
		getchar();
		printf("\nEnter the address: ");
		scanf("%[^\n]s",stuarr[i].add);
	
	}


	to_upper(stuarr,5);
	for(int i=0;i<5;i++)
	{

		printf("\n the name %d: ",i+1);
		printf("%s",stuarr[i].name);
	
	}


	
   return 0;
}
//converts the lowercase to upper for member name in structure variable
void to_upper(struct student arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int j=0;
		while(arr[i].name[j]!='\0')
		{
				if(arr[i].name[j]>=97 && arr[i].name[j]<=122)
				{
					arr[i].name[j]=arr[i].name[j]-32;
				}
			j++;
		}
	
	}
}
	

