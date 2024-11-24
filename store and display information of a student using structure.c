#include <stdio.h>

// Define a structure for storing student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Create a student variable and assign values to its fields
    struct Student student1;

    // Input student information
    printf("Enter student name: ");
    fgets(student1.name, sizeof(student1.name), stdin);  // Read name with spaces

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Display the student information
    printf("\nStudent Information:\n");
    printf("Name: %s", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
