#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorial values

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        // Print the result
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
