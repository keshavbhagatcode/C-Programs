//Program to input an initial of a student name, age and cgpa and display the same
#include <stdio.h>
void main() 
{
    char initial;
    int age;
    float cgpa;

    printf("Enter the initial of your name: ");
    scanf(" %c", &initial);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("\nStudent Details:\n");
    printf("Initial: %c\n", initial);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
}