/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 29-11-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include<stdio.h>
int p,n;
float r,m,si;
int main(){
printf("Enter the principalamount");
scanf("%d ", &p);
printf("Enter the months");
scanf("%d ", &n);
printf("Enter the rate of interest");
scanf("%f ", &r);
m=n/12.0;
si=p*m*r/100;
printf("simple interest %f",si);
return 0;
}

