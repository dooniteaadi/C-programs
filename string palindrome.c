#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For handling case-insensitivity

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters (optional)
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            // Compare characters ignoring case
            if (tolower(str[start]) != tolower(str[end])) {
                return 0;  // Not a palindrome
            }
            start++;
            end--;
        }
    }
    return 1;  // It is a palindrome
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    gets(str);  // Use fgets(str, sizeof(str), stdin) for safer input in real-world applications

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
