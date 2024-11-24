#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask the user for the filename
    printf("Enter the filename to append: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    printf("Enter text to append to the file (Press Ctrl+D or Ctrl+Z to end):\n");

    // Clear the input buffer
    getchar();

    // Append characters to the file
    while ((ch = getchar()) != EOF) {
        fputc(ch, file);  // Write each character to the file
    }

    // Close the file
    fclose(file);

    printf("Contents appended successfully.\n");
    return 0;
}
