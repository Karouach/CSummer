/*
 ============================================================================
 Name        : inputoutput.c
 Author      :
 Description : Implementing Techniques for Screen-based I/O, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char name[20], adress[30];
    char c;
    printf("How do you feel on a scale of 1-5? ");
    c = getchar();
        printf("Enter Name: ");
        scanf("%s", &name);

    return EXIT_SUCCESS;
}
