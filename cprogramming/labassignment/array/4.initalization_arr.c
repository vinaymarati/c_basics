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
#if 0
int arr[5]={};
int main()
{
	printf("%ld",sizeof(arr));   // size of array 20
   return 0;
}
#endif
#if 0
int arr[10]={2.4,5.6,7.3},i;
int main()
{
 printf("\n%ld",sizeof(arr)); // size of array is 40
for (i=0;i<10;i++)
{
printf("%d ",arr[i]);  // 2 5 7 0 0 0 0 0 0 0 it takes only intger value
}
return 0;
}
#endif
#if 0
int arr[3]={1,2,3,4,5},i;
int main()
{
printf("%lu ",sizeof(arr));  // size of array 12
for(i=0;i<3;i++)
{
printf("%d ",arr[i]);        //it shows warning in array initalization and prints 1 2 3
}
return 0;
}
#endif 
#if 0
int arr[0]={};
int main()
{
printf("%lu",sizeof(arr)); //0
printf("%d",arr[0]);  // 0
return 0;
}
#endif
#if 0
 int arr[0]={1,2,3,4,5};
int i;
int main()
{
	printf("%lu",sizeof(arr));  //00
	for (i=0;i<6;i++)
	{
	printf("%d",arr[i]);        //10000  
	}
return 0;
}
#endif
#if 0
int arr[]={},i;
int main()
{
printf("%lu",sizeof(arr));
for (i=0;i<5;i++)
{
printf("%d",arr[i]);
}
return 0;
}
#endif
#if 1
int arr['a'];
int main()
{
printf("%d",sizeof(arr));
return 0;
}
#endif
