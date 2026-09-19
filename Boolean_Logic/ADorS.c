//Program to check whether the given character is alphabet, digit or special character using boolean logic
#include <stdio.h>
#include <stdbool.h>
void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    bool isLetter=(ch>=65&&ch<=90)?true:(ch>=97&&ch<=122)?true:false;
    bool isDigit=(ch>=48&&ch<=57);
    bool isSpecial=(isLetter==false&&isDigit==false)?true:false;
    printf("\n--- Results for '%c' (ASCII: %d) ---\n", ch, ch);

    if (isLetter) {
        printf("Classification: Alphabet\n");
    } else if (isDigit) {
        printf("Classification: Digit\n");
    } else if (isSpecial) {
        printf("Classification: Special Character\n");
    }
}