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
int size,i;
int main()
{
printf("Enter the size: ");
scanf("%d",&size);
int arr[size];
for (i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=(size-1);i>=0;i--)
{
printf("%d",arr[i]);
}

   return 0;
}

