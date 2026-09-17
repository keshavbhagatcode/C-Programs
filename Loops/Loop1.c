//Without using condition statements, checking if a number is even or odd using a for loop
#include <stdio.h>
void main() 
{
    int num;
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i; i <= num; i += 2) 
    {
        if (i == num) 
        {
            printf("The number %d is Even\n", num);
            return;
        } 
    }
    printf("The number %d is Odd\n", num);
}