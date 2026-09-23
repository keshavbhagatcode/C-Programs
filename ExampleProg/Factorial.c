//Accept a non negative integer from the user and calculate its factorial.
#include <stdio.h>
int main()
{
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is a non-negative integer
    if (num < 0) 
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        for (i = 1; i <= num; i++) 
        {
            factorial *= i; // Calculate factorial
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}