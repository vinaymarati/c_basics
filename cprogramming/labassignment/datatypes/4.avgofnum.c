#include<stdio.h>
float avg;
int a,b,c,d,n;
int main()
{
printf("Enters the numbers");

scanf("%d %d %d %d %d",&a,&b,&c,&d,&n);
avg=(a+b+c+d)/n; 
printf("Average Numbers %f",avg);
return 0;
}
