// Recursive function to count vowels

#include <stdio.h>
#include <stdbool.h>

// Helper function to check if a character is a vowel
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int countVowels(char str[], int index) {
    // Base Case: Reached null terminator
    if (str[index] == '\0') {
        return 0;
    }

    // Add 1 if current character is a vowel, plus result of rest of string
    int currentIsVowel = isVowel(str[index]) ? 1 : 0;
    return currentIsVowel + countVowels(str, index + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowels = countVowels(str, 0);
    printf("Total number of vowels: %d\n", vowels);

    return 0;
}