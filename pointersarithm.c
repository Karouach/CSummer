/*
 ============================================================================
 Name        : pointersarithm.c
 Author      :
 Description : Performing pointer arithmetic, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {
      int sizes [] = {10, 20, 30};
      int *ptr = sizes; //prt Points to the start of the array
      printf("Adress %x stores the value %d\n", ptr, *ptr);

      ptr++; //Increment pointing to second value in the array
      printf("Adress %x stores the value %d\n", ptr, *ptr);

      ptr++; //Increment pointing to third value in the array
      printf("Adress %x stores the value %d\n", ptr, *ptr);

      ptr--;
      ptr--;//Decrement pointing to first value in the array
      printf("Adress %x stores the value %d\n", ptr, *ptr);

      return EXIT_SUCCESS;
}

