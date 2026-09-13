//Determine whether a number is positive, negative, or zero
#include <stdio.h>
void main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char* result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
    printf("The number %d is: %s\n", num, result);
}