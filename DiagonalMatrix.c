//C program to check if a matrix is diagonal 
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int isDiagonal = 1; // Flag to check if the matrix is diagonal

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if the matrix is square
    if (rows != cols) {
        printf("The matrix must be square to check if it is diagonal.\n");
        return 1;
    }

    // Declare a 2D array
    int matrix[rows][cols];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for diagonal elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i != j && matrix[i][j] != 0) { // Non-diagonal elements should be zero
                isDiagonal = 0;
                break;
            }
        }
        if (!isDiagonal) {
            break;
        }
    }

    // Print result
    if (isDiagonal) {
        printf("The matrix is a diagonal matrix.\n");
    } else {
        printf("The matrix is not a diagonal matrix.\n");
    }

    return 0;
}