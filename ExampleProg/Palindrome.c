//Check whether a number is a Palindrome or not using bitwise operators by creating a function
#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0;

    // Reverse the number using bitwise operators
    while (originalNum != 0) {
        reversedNum = (reversedNum << 1) | (originalNum & 1);
        originalNum >>= 1;
    }

    // Check if the number is a Palindrome
    return reversedNum == num;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is not a Palindrome.\n", num);

    return 0;
}