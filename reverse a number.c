#include <stdio.h>

int main() {
    int num, reversedNum = 0, digit;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        digit = num % 10;                // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Build the reversed number
        num /= 10;                       // Remove the last digit
    }

    // Print the reversed number
    printf("The reversed number is: %d\n", reversedNum);

    return 0;
}
