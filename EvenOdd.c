//Check wether a number is even or odd
#include <stdio.h>
void main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char* result = (num % 2 == 0) ? "Even" : "Odd";
    printf("The number %d is: %s\n", num, result);
}