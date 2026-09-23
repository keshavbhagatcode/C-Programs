//Accept n integers in an array and display the greatest and smallest values
#include <stdio.h>
int main()
{
    int n, i, greatest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer values:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    greatest = arr[0];
    smallest = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > greatest) 
        {
            greatest = arr[i];
        }
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }
    printf("Greatest value: %d\n", greatest);
    printf("Smallest value: %d\n", smallest);
    return 0;
}