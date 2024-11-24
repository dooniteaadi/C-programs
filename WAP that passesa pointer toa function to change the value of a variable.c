#include <stdio.h>

// Function that takes a pointer to an integer and modifies its value
void changeValue(int *ptr) {
    *ptr = 100;  // Dereference the pointer and change the value it points to
}

int main() {
    int num = 50;
    
    // Print original value of num
    printf("Original value of num: %d\n", num);
    
    // Pass the address of num to the function
    changeValue(&num);
    
    // Print the modified value of num
    printf("Modified value of num: %d\n", num);
    
    return 0;
}
