#include <stdio.h>

void insertElement(int arr[], int n, int element, int position) {
    // Shift elements to the right to make space
    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
}

int main() {
    int arr[100], n, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert (0-based index): ");
    scanf("%d", &position);

    insertElement(arr, n, element, position);
    n++;  // Increase the number of elements

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
