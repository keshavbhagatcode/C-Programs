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
    // Verification test cases
    int testCases[] = {12345, 0, 7, 1000, 404};
    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    printf("=== Test Verification ===\n");
    for (int i = 0; i < numTests; i++) {
        int input = testCases[i];
        printf("Input: %-6d -> Reversed: %d\n", input, reverseNumber(input));
    }

    return 0;
}