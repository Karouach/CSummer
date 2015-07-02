/*
 ============================================================================
 Name        : binaryoperators.c
 Author      :
 Description : Bit-level calculations and bitwise operations
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

    puts("Bit-Level Calculations: ");

    unsigned int x = 10;
    unsigned int y = 1;
    unsigned int result;

    result = x | y;
    printf("x | y = %d\n", result);

    result = x & y;
    printf("x & y = %d\n", result);

    result = x ^ y;
    printf("x ^ y = %d\n", result);

    result = x >> 1; // Equivalent to divide by 2
    printf("x >> 1 = %d\n", result);

    result = y << 1; // Equivalent to multiply by 2
    printf("y << 1= %d\n", result);



    return EXIT_SUCCESS;
}
