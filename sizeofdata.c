/*
 ============================================================================
 Name        : sizeofdata.c
 Author      :
 Description : Displays sizes of integer data types
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    puts("Memory Size of each Type");
    puts("------------------------\n");

    //Size of Integer Types
    printf("Storage Size for char: %lu bytes\n", sizeof(char));
    printf("Storage Size for unsigned char: %lu bytes\n", sizeof(unsigned char));
    printf("Storage Size for signed char: %lu bytes\n", sizeof(signed char));
    printf("Storage Size for int: %lu bytes\n", sizeof(int));
    printf("Storage Size for unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Storage Size for short: %lu bytes\n", sizeof(short));
    printf("Storage Size for unsgined short: %lu bytes\n", sizeof(unsigned short));
    printf("Storage Size for long: %lu bytes\n", sizeof(long));
    printf("Storage Size for unsigned long: %lu bytes\n", sizeof(unsigned long));

    //Size of Void Types
    printf("Storage Size for void : %lu bytes\n", sizeof(void));


    return EXIT_SUCCESS;
}
