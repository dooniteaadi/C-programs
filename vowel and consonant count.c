#include <stdio.h>
#include <ctype.h>  // For handling case-insensitivity

void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;

    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase for case-insensitivity
        char ch = tolower(str[i]);

        // Check if the character is a letter
        if (isalpha(ch)) {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {  // If it's a letter and not a vowel, it's a consonant
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets for safer input

    // Count vowels and consonants in the string
    countVowelsConsonants(str);

    return 0;
}
