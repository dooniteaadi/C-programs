#include <stdio.h>

// Function to implement binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        // Calculate the middle index
        int mid = low + (high - low) / 2;
        
        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;  // Target found
        }
        
        // If target is greater than mid, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller than mid, ignore the right half
        else {
            high = mid - 1;
        }
    }
    
    // Target is not found in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
