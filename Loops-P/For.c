//Taking a number as input and checking if it is even or odd using for loop
#include <stdio.h>
int main()
{
    int num;
    int i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i; i <=num; i+=2) 
    {
        if (i==num) 
        {
            printf("The number %d is Even\n", num);
            return 0;
        } 
    }
    if(i!=num)
    {
        printf("The number %d is Odd\n", num);
        return 0;
    }
}