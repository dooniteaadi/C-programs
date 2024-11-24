#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        sum += digit;     // Add the digit to the sum
        num /= 10;        // Remove the last digit
    }

    // Print the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
