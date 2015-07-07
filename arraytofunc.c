/*
 ============================================================================
 Name        : arraytofunc.c
 Description : Passing an array to a function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void func1(int array[]);


int main(void) {

 int list[5] = {1, 2, 3, 4, 5};
 func1(list);

 return EXIT_SUCCESS;
}

void func1(int array[]){
 printf("Array[3] = %d\n", array[3]);
}


