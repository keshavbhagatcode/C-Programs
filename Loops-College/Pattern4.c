/*Program to print the pattern using loops
   *
  ***
 *****
  ***
   *
*/
#include <stdio.h>
void main()
{
    int i,j;
    int a=2,b=1;
    for(i=1;i<=5;i+=2)
    {
        for(j=1;j<=a;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        a--;
    }
    for(i=3;i>=1;i-=2)
    {
        for(j=1;j<=b;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        b++;
    }
}