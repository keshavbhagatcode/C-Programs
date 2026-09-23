//Check whether a number is a Palindrome or not using bitwise operators
#include <stdio.h>

int main() 
{
    int num, originalNum, reversedNum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    // Reverse the number using bitwise operators
    while (originalNum != 0) 
    {
        reversedNum = (reversedNum << 1) | (originalNum & 1);
        originalNum >>= 1;
    }

    // Check if the number is a Palindrome
    if (reversedNum == num)
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is not a Palindrome.\n", num);

    return 0;
}