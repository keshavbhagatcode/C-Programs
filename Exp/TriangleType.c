//Using Switch case to determine the type of triangle based on the lengths of its sides
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a == b && b == c) {
        case 1:
            printf("The triangle is equilateral.\n");
            break;
        case 0:
            switch (a == b || b == c || a == c) {
                case 1:
                    printf("The triangle is isosceles.\n");
                    break;
                case 0:
                    printf("The triangle is scalene.\n");
                    break;
            }
            break;
    }
}