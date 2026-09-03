//Divison Program for dividing two numbers.
#include<stdio.h>
void main()
{
    float a,b,div;
    printf("Enter two numbers to divide: ");
    scanf("%f %f",&a,&b);
    div=a/b;
    printf("Division of %f and %f is: %f",a,b,div);
}