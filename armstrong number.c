#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;  // Extract the last digit
        result += pow(remainder, n);    // Add the digit raised to the power of n
        originalNum /= 10;              // Remove the last digit
    }

    // Check if the number is equal to the sum
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
