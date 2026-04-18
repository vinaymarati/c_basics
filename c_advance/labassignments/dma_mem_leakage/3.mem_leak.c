/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 17-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
/* This Program That Tries to Access Memory Beyond the End of an Array */


#include <stdlib.h>
#include <stdio.h>

 int main(void)
 {
  char *ptr1;
  char *ptr2;
  int i  = 1;
 
  ptr1 = (char *) malloc(512);
  ptr2 = (char *) malloc (512);
  
  for (i; i < 512; i++)  {
       ptr1[i] = '?';
       ptr2[i] = ptr1[i];
    }

  free(ptr1);
  free(ptr2);
 }


