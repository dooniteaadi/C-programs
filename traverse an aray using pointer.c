#include <stdio.h>

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    
    // Get the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Pointer to the first element of the array
    int *ptr = arr;

    printf("Array elements using pointers:\n");

    // Traverse the array using pointer arithmetic
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // Accessing each element via pointer
    }

    // Alternatively, traverse the array using pointer increments
    printf("\nArray elements using pointer increment:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);  // Dereferencing the pointer to get the value
        ptr++;  // Move the pointer to the next element
    }

    return 0;
}
