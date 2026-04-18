/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 30-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int i,size;
void mystrupr(char str[]);
int main()
{   
	printf("Enter the size: ");
	scanf("%d",&size);
	char str[size];
	printf("\nEnter the string: ");
	getchar();
	scanf("%[^\n]s",str);
	mystrupr(str);
   return 0;
}

void  mystrupr(char str[])
{	int i=0;
	while(str[i])
	{
		if((str[i]>=97) && (str[i]<=122))
		{
			str[i]-=32;
		
		}
		i++;
	
	}
	puts(str);

}
