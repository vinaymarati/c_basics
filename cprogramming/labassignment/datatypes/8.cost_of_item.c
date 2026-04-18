/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 29-11-25
*Program              :cost of item
*Sample Input         :Enter the sale price400
                       Enter the profit50
                       Enter the no of items10
*Sample Output        :cost of item: 35
*
*************************************************************************/


#include <stdio.h>
int sp,p,n,cp,item;
int main()
{
printf("Enter the sale price");
scanf("%d",&sp);
printf("Enter the profit");
scanf("%d",&p);
printf("Enter the no of items");
scanf("%d",&n);
cp=sp-p;
item=cp/n;
printf("cost of item: %d",item);

   return 0;
}

