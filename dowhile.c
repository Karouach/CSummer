/*
 ============================================================================
 Name        : dowhile.c
 Author      :
 Description : WHILE vs DO-WHILE loops, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void getInputData1(void);
void getInputData2(void);
int main(void) {
     //getInputData1();
     getInputData2();
    return EXIT_SUCCESS;
}

void getInputData1(){
    char c = 'x';
    int testVariable = 0;
    while (c != 'x'){
        testVariable = 999;
        printf("Enter a letter");
        c = getchar();
        printf("You entered a letter %c", c);
        getchar();
    }
    printf("You entered x and the loop exiter\n");
    printf("testvariable is: %d", testVariable );
}

void getInputData2() {
    char c = 'x';
    int testVariable = 0;
    do {

            testVariable = 999;
            printf("Enter a letter");
            c = getchar();
            printf("You entered a letter %c", c);
            getchar();
        }
        while (c != 'x');
        printf("You entered x and the loop exiter\n");
        printf("testvariable is: %d", testVariable);
    }

