/*
 ============================================================================
 Name        : multidimarray.c
 Author      :
 Description : Two dimensional arrays, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 2
#define NUM_COLS 3


void printTable(int table[][NUM_COLS]);

int main(void) {
    //Initialize
    int table[NUM_ROWS][NUM_COLS] = {
            {132,142, 23},
            {  0, 76,872}
    };
    printf("Row 1 Column 2 contains %d\n", table[1][2]);
    printTable(table);
    return EXIT_SUCCESS;
}

void printTable(int table[][NUM_COLS]){
    printf("\n The table:\n");
    int i;
    int j;
    for( i=0; i<NUM_ROWS; i++){
        for( j=0; j<NUM_COLS; j++){
            printf("%4d",table[i][j]);
        }
        printf("\n");
    }
}