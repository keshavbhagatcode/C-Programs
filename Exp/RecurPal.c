//Check Palindrome Number using Recursive function
#include <stdio.h>
#include <stdbool.h>

// Helper function to reverse digits recursively
int reverseDigits(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseDigits(num / 10, rev * 10 + (num % 10));
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    if (num < 0) return false; // Negative numbers are not palindromes
    if (num == 0) return true;
    
    return num == reverseDigits(num, 0);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a Palindrome.\n", num);
    } else {
        printf("%d is NOT a Palindrome.\n", num);
    }

    return 0;
}