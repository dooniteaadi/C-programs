#include <stdio.h>

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");

    // Access array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // Access elements using ptr + i
    }

    printf("\nPointer increment and decrement:\n");
    
    // Pointer increment
    printf("Initial value pointed by ptr: %d\n", *ptr);  // Should print 10
    ptr++;  // Move the pointer to the next element
    printf("After increment, value pointed by ptr: %d\n", *ptr);  // Should print 20

    // Pointer decrement
    ptr--;  // Move the pointer back to the previous element
    printf("After decrement, value pointed by ptr: %d\n", *ptr);  // Should print 10

    // Pointer difference (pointer arithmetic)
    int *ptr1 = arr + 2;  // Pointer to the third element (30)
    printf("\nPointer difference between ptr1 and ptr: %ld\n", ptr1 - ptr);  // Should print 2 (3rd element - 1st element)

    // Accessing elements using pointer and array index
    printf("\nAccessing array elements using both pointer and array index:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d (Using ptr[%d]): %d\n", i + 1, *(arr + i), i, ptr[i]);
    }

    return 0;
}
