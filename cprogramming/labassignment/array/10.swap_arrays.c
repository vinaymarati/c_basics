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
int i,j,size;
int main()
{
printf("Enter the size of array: ");
scanf("%d",&size);
int arr1[size],arr2[size];
printf("\nEnter the elements of array1: ");
for(i=0;i<size;i++)
{
scanf("%d",&arr1[i]);
}
printf("\nEnter the elements of array2: ");
for(j=0;j<size;j++)
{
scanf("%d",&arr2[j]);
}
for(i=0,j=size-1;i<size;i++,j--)
{ int temp;
temp=arr1[i];
arr1[i]=arr2[j];
arr2[j]=temp;
}
printf("\narray1: ");
for(i=0;i<size;i++)
{
printf("%d",arr1[i]);
}
printf("\narray2: ");
for(i=0;i<size;i++)
{
printf("%d",arr2[i]);
}
   return 0;
}

