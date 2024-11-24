#include <stdio.h>

int main() {
    int m, n, p, q;

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    // Check if matrix multiplication is possible (columns of first matrix = rows of second matrix)
    if (n != p) {
        printf("Matrix multiplication is not possible. Number of columns of first matrix must equal number of rows of second matrix.\n");
        return 1;
    }

    int matrix1[m][n], matrix2[p][q], result[m][q];

    // Input elements for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the result matrix with 0s
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result of matrix multiplication
    printf("The resulting matrix after multiplication is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
