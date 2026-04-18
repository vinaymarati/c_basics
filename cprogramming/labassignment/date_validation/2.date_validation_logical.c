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
	printf("Enter the date format dd-mm-yyyy ");
	scanf("%d-%d-%d",&d,&m,&y);
	if( ((y>999) && (y<=9999)) && ((m>0) && (m<=12)) && ((d>0) && (d<=31)))
	{
		if(m==2)
		{	
			if(((y%100==0) && (y%400==0)) || (y%4==0))
			{	
			    if(d<=29)
				{	
		
					printf("Valid");

				}
				else if(d<=28)
				{	
					printf("Valid");
				}
				else
				{	
					printf("Invalid");
				}
			}
			else
			{	
				printf("Invalid");
			}
		}
		else if ((m==4) || (m==6) || (m==9) || (m==11))
		{	
			if(d<=30)
			{	
				printf("Valid");
			}
			else 
			{	
				printf("Invalid");
			}
		}
		else if(d<=31)
		{	
			printf("Valid");

		}
		else
		{	
			printf("Invalid");
		}
		
		
	}
	else
	{	
		printf("Invalid");
	}


   return 0;
}

