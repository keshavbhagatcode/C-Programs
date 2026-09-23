//Read 2 integers, Left is starting and Right is ending, and print all prime numbers between them
#include <stdio.h>
int isPrime(int n)
{
    if (n <= 1) 
    {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
void printPrimesInRange(int left, int right)
{
    printf("Prime numbers between %d and %d are:\n", left, right);
    for (int num = left; num <= right; num++) 
    {
        if (isPrime(num)) 
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}
void main() 
{
    int left, right;
    printf("Enter the starting number (Left): ");
    scanf("%d", &left);
    printf("Enter the ending number (Right): ");
    scanf("%d", &right);
    printPrimesInRange(left, right);
}