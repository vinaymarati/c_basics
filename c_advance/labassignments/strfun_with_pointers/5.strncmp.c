/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 12-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
int mystrncmp(char *s1,char *s2,int n);
int main()
{
	char str1[10],str2[10];
	int n=0,ret=0;
	
	printf("Enter the str1: ");
	scanf("%[^\n]s",str1);
	getchar();
	printf("\nEnter the str2: ");
	scanf("%[^\n]s",str2);
	printf("\nEnter the n : ");
	scanf("%d",&n);
	ret=mystrncmp(str1,str2,n);
	printf("Difference : %d\n",ret);
	//if it returns '0' both strings are same 
	if(!ret)
	{
		printf("Both are same");
	}
	else
	{
		printf("Both are not same");
	}
	

   return 0;
}
//function will compare for n characters 
int mystrncmp(char *s1,char *s2,int n)
{
	int i=0;
	//compare for n characters
	while(i<n && (*s1!='\0' || *s2 !='\0'))
	{
		if(*s1 != *s2)
		{
			//*s1,*s2 are values if returns the difference two characters
			return *s1-*s2;
		}
		//increments the address 
		s1++;
		s2++;
		i++;	
	}
		
return 0;
}
