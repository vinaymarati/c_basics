/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-12-25
*Program              : Read Three Integers rotate their values x,y,z
*Sample Input         : Enter the Three Numbers: 35 65 75
*Sample Output        : Before Swap x: 35, y: 65, z: 75
			After Swap x: 65, y: 75, z: 35
*
*************************************************************************/


#include <stdio.h>
int x,y,z,temp;                                          //Declare Variables temp:store temp value
int main()
{
	printf("Enter the Three Numbers: ");
	scanf("%d%d%d",&x,&y,&z);                            //Read the values from user
	printf("Before Swap x: %d, y: %d, z: %d\n",x,y,z);    // ex x=35 y=65 z=75
	temp=y;                                               // temp=y=65
	y=z;                                                  // y=z =75
	z=x;                                                  // z=x =35
	x=temp;                                               // x=temp =65
	printf("After Swap x: %d, y: %d, z: %d",x,y,z);
   return 0;
}

