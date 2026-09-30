//Printing a string rev order using recursive function
#include <stdio.h>

// Helper recursive function that manages array indexing
void printReverseHelper(char str[], int index) {
    // Base Case: Stop when reaching the end of the string
    if (str[index] == '\0') {
        return;
    }

    // Recurse first to reach the end before printing
    printReverseHelper(str, index + 1);

    // Print character on the way back down the call stack
    putchar(str[index]);
}

// Wrapper function for a clean caller interface
void printReverse(char str[]) {
    printReverseHelper(str, 0);
    printf("\n");
}

int main() {
    char str[] = "Hello World";

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    printReverse(str);

    return 0;
}