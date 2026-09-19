//Program to check loan eligiblity using boolean logic
#include <stdio.h>
#include <stdbool.h>
void main()
{
    int age;
    float income, loanAmount;
    bool isEligible;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your monthly income: ");
    scanf("%f", &income);
    printf("Enter the desired loan amount: ");
    scanf("%f", &loanAmount);
    isEligible=(age>=21&&age<=60)&&(income>=20000)&&(loanAmount<=income*10)?true:false;
    if (isEligible) 
    {
        printf("You are eligible for the loan.\n");
    } 
    else
    {
        printf("You are not eligible for the loan.\n");
    }
}