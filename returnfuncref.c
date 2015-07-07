/*
 ============================================================================
 Name        : returnfuncref.c
 Description : Returning data from functions (values passed to
               its parameters by reference)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void funcByRef (int *a, int *b);

int main(void) {

 int a, b;
 funcByRef(&a, &b);
 printf("After funcByRef()  a=%d, b=%d\n", a, b);

 return EXIT_SUCCESS;
}

void funcByRef(int *a, int *b){ //This Function Modifies values passed to its parameters by reference
 *a= 1;
 *b= 2;

}
