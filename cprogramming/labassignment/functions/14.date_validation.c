/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int date_validation_check(int y,int m,int d)
{
	int valid;
	if(y>=999 && y<=9999 && m>0 && m<=12 && d>0 && d<=31)
	{

		switch(m)
		{
			case 4:
			case 6:
			case 9: 
			case 11: if(d<=30)
					 {
						 valid=1;
					 }
					 else
					 {
						 valid=0;
					 }
					 break;
			case 2: if(((y%100!=0) &&(y%4==0)) || (y%400==0))
					{
						if(d<=29)
						{
							valid=1;
						}
						else
						{
							valid=0;

						}
					}
					else if(d<=28)
					{
						valid=1;
					}
					else
					{
						valid=0;
					}
					break;
			default : if(d<=31)
					  {
						  valid=1;
					  }
					  else
					  {	valid=0;
					  }
					  break;


		}

	}else
	{	
		valid=0;
	}
return valid;

}
int main()
{
	int year,month,day,is_valid;
	printf("Enter the date dd-mm-yyyy ");
	scanf("%d-%d-%d",&day,&month,&year);
	is_valid=date_validation_check(year,month,day);
	printf("is valid %d",is_valid);
   return 0;
}

