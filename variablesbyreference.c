/*
 ============================================================================
 Name        : variablesbyreference.c
 Description : Passing variables by reference to functions, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototype
void someOtherFunction(int *a, int *b);


int main(void) {
 printf("--- By Value ---\n"); //--By Reference--The argument ADDRESSES are copied into the function parameters
 int x = 0;
 int y = 0;

 printf("Before function call: x=%d   y=%d\n", x, y);
 someOtherFunction(&x,&y);
 printf("After function call: x=%d   y=%d\n", x, y);


 return EXIT_SUCCESS;
}

void someOtherFunction(int *a, int *b){
 printf("In function received: a=%d   b=%d\n", *a, *b);
 *a = 100;
 *b = 200;
 printf("In function modified: a=%d   b=%d\n", *a, *b);
}

/* RESULT
Before function call: x=0   y=0
In function received: a=0   b=0
In function modified: a=100   b=200
After function call: x=100   y=200 */
