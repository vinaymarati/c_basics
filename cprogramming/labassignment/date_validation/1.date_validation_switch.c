/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>

int main()
{	
	int d,m,y;
	printf("Enter the date in format dd-mm-yyyy");
	scanf("%d-%d-%d",&d,&m,&y);
	if (((y>999) && (y<=9999)) && ((m>0) && (m<=12)) && ((d>0) && (d<=31)))
	{	
		
	switch(m)
		{		
		case 4:
		case 6:
		case 9:
		case 11: if(d<=30)
				{		
					printf("It is valid Date");
				}
				else
				{	
					printf("It is invalid Date");
				}
				break;
		
		case 2: if ((((y%100==0) && (y%400==0)) || (y%4==0)) && (d<=29))
				{	
					printf("It is valid leap");
				}
				else if (d<=28)
				{	
					printf("It is valid Date");
				}
				else
				{	
					printf("Invalid Date");
				}
				break;
					
		default: if(d<=31)
				{	
					printf("It is valid Date");
				}
				else
				{	
					printf("It is Invalid Date");
				}
				break;		
				
		}
		
	}
	else
	{	
		printf("Invalid date");
	}
	

   return 0;
}

