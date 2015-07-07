/*
 ============================================================================
 Name        : funcreturnvalue.c
 Description : Returning data from functions (Value), Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
 int n = func();
 printf("After Function Call func(), n=%d\n", n);

 return EXIT_SUCCESS;
}

int func(void){ //This Function Simply returns a value
 int value = 10;
 return value;
}
