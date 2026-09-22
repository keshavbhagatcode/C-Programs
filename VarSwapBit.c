//Swapping values of two variables using bitwise XOR operator
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a = %d, b = %d\n", a, b);
}