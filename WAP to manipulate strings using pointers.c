#include <stdio.h>

// Function to copy a string
void copyString(char *src, char *dest) {
    while (*src) {
        *dest = *src;  // Copy character by character
        src++;
        dest++;
    }
    *dest = '\0';  // Null-terminate the destination string
}

// Function to concatenate two strings
void concatStrings(char *str1, char *str2, char *result) {
    while (*str1) {
        *result = *str1;  // Copy first string to result
        str1++;
        result++;
    }
    while (*str2) {
        *result = *str2;  // Copy second string to result
        str2++;
        result++;
    }
    *result = '\0';  // Null-terminate the result string
}

// Function to calculate the length of a string
int stringLength(char *str) {
    int length = 0;
    while (*str) {
        length++;
        str++;
    }
    return length;
}

// Function to reverse a string
void reverseString(char *str) {
    char *end = str;
    while (*end) {
        end++;
    }
    end--;  // Move to the last character

    // Swap characters from front and back
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[100];  // To hold the result of concatenation

    // Copy string
    char copiedStr[100];
    copyString(str1, copiedStr);
    printf("Copied String: %s\n", copiedStr);

    // Concatenate strings
    concatStrings(str1, str2, result);
    printf("Concatenated String: %s\n", result);

    // Find string length
    int length = stringLength(str1);
    printf("Length of '%s': %d\n", str1, length);

    // Reverse string
    reverseString(str1);
    printf("Reversed String: %s\n", str1);

    return 0;
}
