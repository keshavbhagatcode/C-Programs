//Check whether a number is strong number or not
#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num, originalNum, remainder, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0)
    {
        remainder = num % 10;
        fact = factorial(remainder);
        sum += fact;
        num /= 10;
    }
    if (sum == originalNum)
    {
        printf("%d is a strong number.\n", originalNum);
    }
    else
    {
        printf("%d is not a strong number.\n", originalNum);
    }
    return 0;
}