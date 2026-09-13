//Inputting 2 numbers and displaying their sum, difference, product, quotient and remainder
#include <stdio.h>
void main() 
{
    int num1, num2;
    int sum, difference, product, quotient, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("\nResults:\nSum: %d\nDifference: %d\nProduct: %d\nQuotient: %d\nRemainder: %d\n", sum, difference, product, quotient, remainder);
}