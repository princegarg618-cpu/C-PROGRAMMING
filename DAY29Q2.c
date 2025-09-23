#include <stdio.h>

int main() {
    int arr[100] = {1, 3, 5, 7, 9}; // sorted array
    int n = 5;                       // current number of elements
    int x = 6;                       // element to insert

    int i;
    // Find the correct position and shift elements
    for (i = n - 1; i >= 0 && arr[i] > x; i--) {
        arr[i + 1] = arr[i]; // shift element right
    }

    arr[i + 1] = x; // insert element
    n++;             // increase size

    // Print updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}