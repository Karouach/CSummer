#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

    //Floating point Types
    float floatNum;
    double doubleNum;
    long double longDoubleNum;

    //Size of floating point types
    printf("Storage Size for unsigned float: %lu bytes \n", sizeof(float));
    printf("Storage Size for double: %lu bytes \n", sizeof(double));
    printf("Storage Size for long double: %lu bytes \n", sizeof(long double));

    floatNum = 2.0/ 3.0;
    doubleNum = 2.0/ 3.0;
    longDoubleNum = 2.0/ 3.0;

    puts("\nCompare precision at 4 decimal points: ");
    printf("FloatNum = %1.4f\n", floatNum);
    printf("DoubleFloatNum = %1.4f\n", doubleNum);
    printf("LonDoubleNum = %1.4lf\n", longDoubleNum);

    puts("\nCompare precision at 10 decimal points:");
    printf("floatNumber      = %1.10f\n", floatNum);
    printf("doubleNumber     = %1.10f\n", doubleNum);
    printf("longDoubleNumber = %1.10lf\n", longDoubleNum);

    puts("\nCompare precision at 30 decimal points:");
    printf("floatNumber      = %1.30f\n", floatNum);
    printf("doubleNumber     = %1.50f\n", doubleNum);
    printf("longDoubleNumber = %1.50lf\n", longDoubleNum);


    return EXIT_SUCCESS;
}