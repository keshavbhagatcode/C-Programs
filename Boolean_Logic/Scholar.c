//Program to check whether a student is eligible for a scholarship or not using boolean logic
#include <stdio.h>
#include <stdbool.h>

void main() 
{
    float gpa;
    int income;
    bool isEligible;

    printf("Enter student's GPA: ");
    scanf("%f", &gpa);
    printf("Enter student's annual income: ");
    scanf("%d", &income);

    // Check eligibility criteria
    isEligible = (gpa >= 3.5 && income <= 50000) ? true : false;

    // Display result
    if (isEligible) 
    {
        printf("The student is eligible for the scholarship.\n");
    } else 
    {
        printf("The student is not eligible for the scholarship.\n");
    }
}