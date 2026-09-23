//Using Pass-by-value, design a function to calculate sum of first n even numbers by breaking the problem into sub tasks
#include <stdio.h>
int sum(int n) 
{
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += 2 * i; // Calculate the ith even number and add to sum
    }
    return s;
}
void main() 
{
    int n;
    printf("Enter the number of even numbers to sum: ");
    scanf("%d", &n);
    printf("Sum of first %d even numbers is: %d\n", n, sum(n));
}