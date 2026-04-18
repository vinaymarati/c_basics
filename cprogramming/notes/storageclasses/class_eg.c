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
extern int w;
w=10;
int x;
printf("w %d\n",w);
static int y;

printf("w %d\n",w);
fun1();
//fun2();

   return 0;
}
int w;
int fun1()
{
printf("w %d\n",w);
w++;
}
#endif
/* w 10
w 10
w 10
------class_eg.c: In function ‘main’:
class_eg.c:17:17: error: ‘w’ undeclared (first use in this function)
   17 | printf("w %d\n",w);
------------------------------------------------------------------------------------------------*/
#if 0
int x;

int main()
{
printf("x %d\n",x);
fun();
fun();
printf("x %d\n",x);
}
int fun()
{
printf("X %d \n",x);
x++;
}

#endif
/* x 0
X 0 
X 1 
x 2
--------------------------------------------*/
#if 0
int x;
int main()
{
printf("%d %p\n",x,&x);

extern int x;
printf("%d %p\n",x,&x);
fun();
fun();
printf("%d %p\n",x,&x);
}
int x;
int fun()
{
x++;
printf("%d %p\n",x,&x);
}
#endif
/* 
0 0x62bd11504014
0 0x62bd11504014
1 0x62bd11504014
2 0x62bd11504014
2 0x62bd11504014 
-----------------------------------------*/
#if 0
int x;
extern int y;

int main()
{
int y;


int x;
printf("%d %p\n",y,&y);
fun();
fun();
fun1();
printf("%d %p\n",x,&x);
}


int fun()
{
x++;
printf("%d %p\n",x,&x);
}
int fun1()
{
extern int x;
x++;
printf("%d %p \n",x,&x);
}
#endif
/* -1959282048 0x7ffe8b37b990
1 0x5e926d253014
2 0x5e926d253014
3 0x5e926d253014 
32766 0x7ffe8b37b994 
-------------------------------------------------------*/
#if 1
int main()
{
extern int x;
printf("%d %p",x,&x);
fun();
fun();
printf("%d %p",x,&x);
}
static int x;
int fun()
{
x++;
printf("%d %p",x,&x);
}

#endif
/* class_eg.c: At top level:
class_eg.c:135:12: error: static declaration of ‘x’ follows non-static declaration
  135 | static int x;
      |            ^
class_eg.c:129:12: note: previous declaration of ‘x’ with type ‘int’
  129 | extern int x;
----------------------------------------------------------------------*/
