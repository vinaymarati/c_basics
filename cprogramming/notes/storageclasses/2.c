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
int a=10;
int fun()
{

   return a+1;
}
#endif
/* 1.c:69:3: warning: implicit declaration of function ‘fun’ [-Wimplicit-function-declaration]
   69 | a=fun();
      |   ^~~
/usr/bin/ld: /tmp/ccWqU7UO.o:(.data+0x0): multiple definition of `a'; /tmp/ccVKcz5U.o:(.bss+0x0): first defined here
collect2: error: ld returned 1 exit status
----------------------------------------------------------------------------------------------- */
#if 0
int a=10;
int fun()
{
return a+1;                              //2 files 1.c
}
#endif
/*--------------------------------------------------------------------*/
#if 1
int a;
int fun()
{

printf("%d",a);
return a+1;
}
int fun1()
{
printf("%d",a);
}
#endif
