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
int fun1();
int main()
{
int x;
printf("x value: %d\n",x);
int y;
printf("y value %d",y);
static int y;
printf("static y value : %d\n",y);
fun1();
fun1();
   return 0;
}
int w;
int fun1()
{
printf("w value %d\n",w);
w++;

}
/*
1.auto_sc.c: In function ‘main’:
1.auto_sc.c:21:12: error: redeclaration of ‘y’ with no linkage
   21 | static int y;
      |            ^
1.auto_sc.c:19:5: note: previous declaration of ‘y’ with type ‘int’
   19 | int y;
      |     ^
*/
#endif 

#if 0
int main()
{
int x,i=1;
printf("x %d\n",x);
static int y;
printf("y:%d\n",y);
for(i=1;i<=5;i++)
{
fun1();
}

}
int w;
int fun1()
{
printf("w: %d\n",w);
w++;
}
/*x 32765
y:0
w: 0
w: 1
w: 2
w: 3
w: 4 */
#endif
#if 0
int x;
int main()
{
int x;
printf("x %d",x);
static int y;
printf("y %d ",y);
int y;
printf("y %d",y);
}

/*1.auto_sc.c: In function ‘main’:
1.auto_sc.c:80:5: error: redeclaration of ‘y’ with no linkage
   80 | int y;
      |     ^
1.auto_sc.c:78:12: note: previous declaration of ‘y’ with type ‘int’
   78 | static int y;
 ---------------------------------------------------------------------------------*/

#endif

#if 0
int x;
int fun1();
int main()
{
int x;
float x;
printf("x %d",x);
static int y;
printf("y %d",y);

}
int fun1()
{
int x;
printf("x %d\n",x);
int y;
printf("y %d\n",y);
}
#endif
/* 1.auto_sc.c: In function ‘main’:
1.auto_sc.c:99:7: error: conflicting types for ‘x’; have ‘float’
   99 | float x;
      |       ^
1.auto_sc.c:98:5: note: previous declaration of ‘x’ with type ‘int’
   98 | int x;
-----------------------------------------------------------------------------------*/
#if 1
int x;
int y;
int main()
{
int x;
printf("x %d\n",x);
static int y;
printf("y %d\n",y);
int k;
printf("k %d\n",k);
int i;
for (i=1;i<=4;i++)
fun1();
fun2();
}
int fun1()
{
printf("x %d\n",x);
x++;
}
int fun2()
{
printf("y %d\n",y);
y++;
printf("x %d",x);
}
#endif
/* x -1838599592
y 0
k 32766
x 0
x 1
x 2
x 3
y 0
x 4
--------------------------------------------------------------*/

