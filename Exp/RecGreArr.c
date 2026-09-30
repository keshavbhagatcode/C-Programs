//Finding greates integer in an array using recursion
#include <stdio.h>

// Recursive function to find the maximum element
int findMax(int arr[], int n) {
    // Base Case: If array has only one element, return it
    if (n == 1) {
        return arr[0];
    }

    // Recursively find maximum in the remaining n-1 elements
    int maxOfRest = findMax(arr, n - 1);

    // Compare last element with max of rest
    if (arr[n - 1] > maxOfRest) {
        return arr[n - 1];
    } else {
        return maxOfRest;
    }
}

int main() {
    int arr[] = {12, 45, 67, 23, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int maxVal = findMax(arr, n);
    printf("\nMaximum element: %d\n", maxVal);

    return 0;
}