
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // avoid overflow

        if (arr[mid] == target)
            return mid;       // element found
        else if (arr[mid] < target)
            low = mid + 1;    // search in the right half
        else
            high = mid - 1;   
    }

    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("element not found\n");

    return 0;
}


