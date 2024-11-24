#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display options to the user
    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to handle newline characters

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform the operation based on the chosen operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The result is: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result is: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result is: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("The result is: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
