/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 17-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


/*
 Case 2: Dangling pointer - Local variable
       When a function returns a pointer to a local variable, the local variable goes out of scope,
       but the pointer still points to that memory locaion.

*/

#include <stdio.h>

int* getPointerToLocalVariable() {
    int localVar = 100;
    return &localVar;  // Returning address of local variable
}

int main() {
    int *ptr = getPointerToLocalVariable();
    int a=5;
    //ptr = &a;	    
    //ptr is now a dangling pointer because localVar is out of scope
    printf("Dangling pointer value: %d\n", *ptr); // Undefined behavior

    return 0;
}


