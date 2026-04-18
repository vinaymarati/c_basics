/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 19-12-25
*Program              : Comparison of Two dates
*Sample Input         : Enter the first person date dd-mm-yyyy: 30-11-2002
						Enter the second person date dd-mm-yyyy: 24-10-2009

*Sample Output        : first person is old
*
*************************************************************************/


#include <stdio.h>
int date_valid_check(int y,int m,int d)
{
if((y>999)&&(y<=9999) && (m>0) && (m<=12) && (d>0) && (d<=31))
{
	switch(m)
	{
		case 4:
		case 6:
		case 9:
 		case 11: return d<=30 ? 1:  0;
		case 2: if((y%100 !=0) && (y%4==0) || (y%400==0))
				{	
					return d<=29 ?  1:  0;
				}
		default:  return d<=31 ?  1: 0;
	
	}
}
else
{
	return 0;
}

}

int is_old(int y1,int m1,int d1,int y2,int m2,int d2)
{
	if(y1<y2)
		return 1;
	else if(y2<y1)
		return 2;
	else if(m1<m2)
	return 1;
	else if(m2<m1)
		return 2;
	else if(d1<d2)
		return 1;
	else if(d2<d1)
		return 2;
	else 
		return 3;

}

int main()
{
	int r,a=1,b=1,k=1,d1,m1,y1,y2,m2,d2;
	while(k)
	{
		printf("Enter the first person date dd-mm-yyyy: ");
		scanf("%d-%d-%d",&d1,&m1,&y1);
		printf("Enter the second person date dd-mm-yyyy: ");
		scanf("%d-%d-%d",&d2,&m2,&y2);
		a=date_valid_check(y1,m1,d1);
		b=date_valid_check(y2,m2,d2);
		if(a==1 && b==1)
		{
			k=0;
		}
		else
		{
			printf("Enter the valid date: ");
		}
		
	}
	r=is_old(y1,m1,d1,y2,m2,d2);
	if(r==1)
	{
		printf("first person is old");
	}
	else if(r==2)
	{
		printf("second person is old");
	}
	else
	{
		printf("Both are same age");
	}
   return 0;
}

