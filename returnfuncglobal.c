/*
 ============================================================================
 Name        : returnfuncglobal.c
 Description : Returning data from functions (Modifying Global Variable)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Globals
int temperature;

void measure (void);

int main(void) {

 measure();
 printf("After measure()  temperature=%d\n", temperature);

 return EXIT_SUCCESS;
}

void measure(void){ //This Function Modifies Global Variable
  temperature = 34;
}
