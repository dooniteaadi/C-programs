#include <stdio.h>

// Define a union that can store different data types
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Declare a union variable
    union Data data;

    // Store an integer in the union
    data.i = 10;
    printf("data.i (Integer): %d\n", data.i);

    // Store a float in the union
    data.f = 3.14;
    printf("data.f (Float): %.2f\n", data.f);

    // Store a string in the union
    snprintf(data.str, sizeof(data.str), "Hello, Union!");
    printf("data.str (String): %s\n", data.str);

    // Show the memory space used by the union
    printf("\nSize of union: %lu bytes\n", sizeof(data));

    return 0;
}
