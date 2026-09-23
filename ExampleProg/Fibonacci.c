//Accept n from user and display first n terms of fibonacci series.
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) 
    {
        if (i <= 1)
            next = i; // First two terms are 0 and 1
        else 
        {
            next = first + second; // Next term is the sum of the previous two terms
            first = second; // Update first to the previous second
            second = next; // Update second to the new term
        }
        printf("%d ", next); // Print the current term
    }
    printf("\n");
    return 0;
}