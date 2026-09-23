//Program to check whether the given year is a leap year or not using boolean logic
#include <stdio.h>
#include <stdbool.h>

void main()
{
    int year;
    bool isLeapYear;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using boolean logic
    isLeapYear=(year%4==0&&year%100!=0)||(year%400==0)?true:false;

    if (isLeapYear) {
        printf("The year %d is a leap year.\n", year);
    } else {
        printf("The year %d is not a leap year.\n", year);
    }
}