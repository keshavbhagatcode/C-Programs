//This program is used to add two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum;
    printf("Enter two numbers to add: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of %d and %d is: %d",a,b,sum);
    getch();
}