//Program to check whether a character is a vowel or not using boolean logic
#include <stdio.h>
#include <stdbool.h>
void main() 
{
    char ch;
    bool isVowel;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel (case-insensitive)
    isVowel = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch =='U')?true:false;

    if (isVowel) 
    {
        printf("The character '%c' is a vowel.\n", ch);
    } 
    else 
    {
        printf("The character '%c' is not a vowel.\n", ch);
    }
}