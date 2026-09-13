//Check wehther a number is even or odd without using the modulus operator
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if ((num & 1) == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}