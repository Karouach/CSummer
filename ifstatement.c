/*
 ============================================================================
 Name        : ifstatement.c
 Author      :
 Description : if-statements, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getNumber(void);
void tooSmall(void);
void tooLarge(void);
void justRight(void);

int main(void) {

    int num = getNumber();

    if(num < 0)
        tooSmall();
    if (num > 100)
        tooLarge();
    if ((num >= 0) && (num <= 100))
        justRight();

    return EXIT_SUCCESS;
}

int getNumber(void){
    int num;
    printf("Enter a Number between 0 & 100: ");
    scanf("%d", &num);
    return num;
}
void tooSmall(void){
    printf("The number is too small.\n");
}

void tooLarge(void){
    printf("The number is too large.\n");
}

void justRight(void){
    printf("The number is within the correct range\n");
}
