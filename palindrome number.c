#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
