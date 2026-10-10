//A program to reverse a number using recursive function
#include <stdio.h>
// Helper recursive function
int reverseRecursive(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseRecursive(num / 10, rev * 10 + (num % 10));
}

// Main function handling edge case for 0 directly
int reverseNumber(int num) {
    if (num == 0) {
        return 0;
    }
    return reverseRecursive(num, 0);
}

int main() {
    printf("Enter a number to reverse: ");
    int number;
    scanf("%d", &number);
    int reversed = reverseNumber(number);
    printf("Input: %-6d -> Reversed: %d\n", number, reversed);
    return 0;
}