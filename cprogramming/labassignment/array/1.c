/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 29-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
void allnum();
void even();
void odd();
void addnum();
int arr[100];
int i;
int main()
{
	for (i=0;i<100;i++)
	{
		arr[i]=arr[i]+i+1;
	}
	allnum();
	even();
	odd();
	addnum();	
   return 0;
}
void allnum()
{
printf("All elements of array\n");
for(i=0;i<100;i++)
{
printf("%d ",arr[i]);
}
}
void even()
{
printf("All even numbers of array\n");
for (i=0;i<100;i++)
{
	if(arr[i]%2==0)
	{
		printf("%d ",arr[i]);
	}
}
}
void odd()
{
printf("All odd numbers of array\n");
for (i=0;i<100;i++)
{
if(arr[i]%2!=0)
{
printf("%d ",arr[i]);
}
}
}
void addnum()
{
printf("Add 5 to each element in array\n");
for (i=0;i<100;i++)
{
	printf("%d ",arr[i]+5);
}
}

