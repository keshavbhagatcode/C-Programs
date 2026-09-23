//Enter 2 numbers and perform basic arithmetic operations (addition, subtraction, multiplication, division) using switch case statements and using arithmetic operators for selection
#include <stdio.h>
void main() 
{
    char choice;
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Select operation:\n");
    printf("1. Addition(+)\n");
    printf("2. Subtraction(-)\n");
    printf("3. Multiplication(*)\n");
    printf("4. Division(/)\n");
    printf("Enter your choice (1-4): ");
    scanf(" %c", &choice);
    switch (choice) 
    {
        case '+':
            printf("Result: %f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
    }
}