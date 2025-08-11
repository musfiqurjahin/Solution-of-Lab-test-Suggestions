//Write a C program that takes 'n' numbers as input, stores them in an array, displays them, and finds the maximum element:

#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array of size n

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("\nThe entered numbers are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Find maximum element
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nThe maximum element is: %d\n", max);

    return 0;
}
