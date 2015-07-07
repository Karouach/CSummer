/*
 ============================================================================
 Name        : variablesbyvalue.c
 Description : Passing variables by Value to functions, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototype
void someFunction(int a, int b);


int main(void) {
 printf("--- By Value ---\n"); //--By value--, The argument VALUES are copied into the function parameters
 int x = 0;
 int y = 0;

 printf("Before function call: x=%d   y=%d\n", x, y);
 someFunction(x,y);
 printf("After function call: x=%d   y=%d\n", x, y);


 return EXIT_SUCCESS;
}

void someFunction(int a, int b){
 printf("In function received: a=%d   b=%d\n", a, b);
 a = 100;
 b = 200;
 printf("In function modified: a=%d   b=%d\n", a, b);
}

