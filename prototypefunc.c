/*
 ============================================================================
 Name        : prototypefunc.c
 Description : Defining a prototype function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double func(double, double);


int main(void) {
 double result = func(10, 20);
 printf("Result is: %f\n", result);


 return EXIT_SUCCESS;
}
double func(double x, double y){
 return x*y;
}


