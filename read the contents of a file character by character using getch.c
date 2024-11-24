#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask the user for the file name
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character using fgetc
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);  // Print each character
    }

    // Close the file
    fclose(file);

    return 0;
}
