#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");  // Open the file for writing
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // Exit if file cannot be opened
    }

    // Write some text to the file
    fprintf(file, "Hello, this is a file handling example in C.\n");
    fprintf(file, "Writing to a file is simple!\n");

    // Close the file after writing
    fclose(file);

    printf("Data written to file successfully.\n");
    return 0;
}
