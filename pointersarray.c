/*
 ============================================================================
 Name        : pointersarray.c
 Author      :
 Description : Performing pointer arithmetic, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void){
    int data [] = {15, 20, 30, 45, 60, 80};

    int *ptr = data; // pointer points to start the array
    printf("data[] starts at adress %x with value %d\n", ptr, *ptr);

    //Calculate length of the array
    int numElements = sizeof(data) / sizeof(int);
    printf("The size of the array is %d: ", numElements);

    int i;
    for(i = 0; i < numElements; i++){
     printf("The adress %x contains the value %d\n", ptr, *ptr);
     ptr++;
    }

 return EXIT_SUCCESS;
}