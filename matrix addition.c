#include <stdio.h>

int main() {
    int m, n;

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], result[m][n];

    // Input the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    printf("The resulting matrix after addition is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf
