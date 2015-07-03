/*
 ============================================================================
 Name        : dynamicarray.c
 Author      :
 Description : Static array Vs Dynamic Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void){
    //static array waste memory by guarantee to allocate 20 integers
    int arrayStatic[20];

    //Dynamic arrays save memory by creating a pointer that stors the begning of an array
    int *dynamicArray = malloc(sizeof(int));
    *dynamicArray = 10;
    printf("The address %x stors the value %d\n", dynamicArray, *dynamicArray);

    dynamicArray[1] = 20;
    printf("The dynamic array dynamicArray[1] %d\n", dynamicArray[1]);
    printf("The size of the array is  %d\n", sizeof(dynamicArray));

    free(dynamicArray);


 return EXIT_SUCCESS;
}