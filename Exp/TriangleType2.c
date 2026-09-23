//Using if-else case to determine the type of triangle based on the lengths of its sides
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
}