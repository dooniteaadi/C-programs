#include <stdio.h>
#include <stdlib.h>  // For malloc(), free()

int main() {
    int *arr;
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with an error code
    }

    // Input values into the dynamically allocated array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the values in the array
    printf("\nYou entered the following integers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
