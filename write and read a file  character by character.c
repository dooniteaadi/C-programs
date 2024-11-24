#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Could not open file %s for writing.\n", filename);
        return 1;
    }

    printf("Enter text to write to the file (Press Ctrl+D or Ctrl+Z to end):\n");

    // Clear input buffer
    getchar();

    // Write characters to the file
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);  // Write character to the file
    }

    // Close the file after writing
    fclose(file);

    printf("Contents written to file successfully.\n");

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file opened successfully for reading
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filename);
        return 1;
    }

    printf("\nReading contents of the file:\n");

    // Read and display characters from the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display character on the console
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
