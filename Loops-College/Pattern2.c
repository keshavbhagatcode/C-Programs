/* Program to print the pattern using loops
    *
   **
  ***
 ****
***** 
*/
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)//A third variable can also be used
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}