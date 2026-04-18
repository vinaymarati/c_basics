/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 30-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int i,j,n,s;
float average(int arr[],int n,int s);
float result;
int main()
{
	printf("Enter the no of students: ");
	scanf("%d",&n);
	printf("\nEnter the no of subjects: ");
	scanf("%d",&s);
	int arr[s];

	result=average(arr,n,s);
	printf("%f",result);
   return 0;
}
float average(int arr[],int n,int s)
{
float sub[n];
float avg=0,sum=0;
for(i=0;i<n;i++)
{
printf("\nEnter student %d marks",i);
for(j=0;j<s;j++)
{
scanf("%d",&arr[j]);
avg+=arr[j];
}
avg=avg/s;
sub[i]=avg;
avg=0;
}
for(i=0;i<n;i++)
{
avg+=sub[i];
}
avg=avg/n;
return avg;
}
