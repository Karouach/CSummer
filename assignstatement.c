/*
 ============================================================================
 Name        : assignstatement.c
 Author      :
 Description : Simple assignment statements, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

    double originalPrice = 0.0;
    double tax = 0.0;
    double discount = 0.0;
    double specialPrice = 0.0;

    printf("Enter the original price: ");
    scanf("%f", &originalPrice);

    printf("Enter the tax percentage: ");
    scanf("%f", &tax);

    printf("Enter the discount: ");
    scanf("%f", &discount);

    double afterTax = originalPrice*(1.0 + tax/100.0);
    double theDiscount = originalPrice*(discount/100.0);
    specialPrice = afterTax - theDiscount;

    printf("\nOur rules:\n 1. Tax is applied first.\n 2. Discount is applied to the original price\n\n");

    printf("The original price is:  $%.2lf\n",originalPrice);
    printf("The price after tax is: $%.2lf\n",afterTax);
    printf("The discount amount is:  $%.2lf\n",theDiscount);
    printf("Your special price is:  $%.2lf\n",specialPrice);

    return EXIT_SUCCESS;
}
