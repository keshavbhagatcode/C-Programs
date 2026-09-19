//Using boolean logic to check if a number is even, odd, positive, negative or zero
#include <stdio.h>
#include <stdbool.h> // Required for boolean data type in C

void main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    bool isPositive = (num > 0)?true:false;
    bool isZero     = (num == 0)?true:false;
    bool isEven     = (num % 2 == 0)?true:false;
    printf("\n--- Analysis for %d ---\n", num);

    if (isPositive== true)
    {
        printf("Value: Positive\n");
    } else if (isPositive==false && isZero==false) {
        printf("Value: Negative\n");
    } else if (isZero==true) {
        printf("Value: Zero\n");
    }

    if (isEven== true) {
        printf("Parity: Even\n");
    }
    else
    {
        printf("Parity: Odd\n");
    }
}