#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // LCM formula: (a * b) / GCD(a, b)
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display GCD
    int gcd_result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd_result);

    // Calculate and display LCM
    int lcm_result = lcm(num1, num2);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm_result);

    return 0;
}
