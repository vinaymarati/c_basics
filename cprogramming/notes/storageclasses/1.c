/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 23-12-25
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#if 0
int main()
{
	int a;
static int a;
printf("%d",a);
   return 0;
}

#endif
/* 1.c: In function ‘main’:
1.c:17:12: error: redeclaration of ‘a’ with no linkage
   17 | static int a;
      |            ^
1.c:16:13: note: previous declaration of ‘a’ with type ‘int’
   16 |         int a;
-----------------------------------------------------------------*/
#if 0
int main()
{
static int a;
int a;
printf("%d",a);
}

#endif
/* 1.c: In function ‘main’:
1.c:34:5: error: redeclaration of ‘a’ with no linkage
   34 | int a;
      |     ^
1.c:33:12: note: previous declaration of ‘a’ with type ‘int’
   33 | static int a;
------------------------------------------------------------------------------*/
#if 0
static int a;
int main()
{
int a;
printf("%d",a);                 //garbage value
}

#endif
#if 0
int a;
int main()
{
static int a;
printf("%d",a);                 //gives 0 value
}
#endif
/*-----------------------------------------------------------------------------*/
#if 0
int a;
int main()
{
printf("%d",a);               //comparsion of two files 2.c 
a=fun();
printf("%d",a);
}
#endif
/*----------------------------------------------------*/
#if 0
static int a;
int main()
{
printf("%d",a);              //0
a=fun();
printf("%d",a);              /11  
}
#endif
/*---------------------------------------------------------*/
#if 1
 int a;
int b;
int main()
{

extern int b;
printf("%d",b);
printf("%d",a);
a=fun();
printf("%d",a);
b=fun1();
printf("%d",b);
}
#endif
