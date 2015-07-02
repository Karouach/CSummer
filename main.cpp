#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    int aNumber;

    printf("Please enter a number: ");
    scanf("%d", &aNumber);
    printf("You entered number: %d", aNumber);
    getchar();
    return 0;
}