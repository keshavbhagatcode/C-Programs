/*Input 3 numbers and calculate
a=a+b*c;
b=a/c;
c=b+a;
And displaying the result*/
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    a = a + b * c;
    b = a / c;
    c = b + a;

    printf("\nResults:\na: %d\nb: %d\nc: %d\n", a, b, c);
}