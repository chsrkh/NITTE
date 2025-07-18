//c Program to check if a matrix is a Tri-Diagonal Matrix
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int isTriDiagonal = 1; // Flag to check if the matrix is tri-diagonal

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if the matrix is square
    if (rows != cols) {
        printf("The matrix must be square to check if it is tri-diagonal.\n");
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

    // Check for tri-diagonal elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if ((i != j && i != j - 1 && i != j + 1) && matrix[i][j] != 0) {
                isTriDiagonal = 0;
                break;
            }
        }
        if (!isTriDiagonal) {
            break;
        }
    }

    // Print result
    if (isTriDiagonal) {
        printf("The matrix is a tri-diagonal matrix.\n");
    } else {
        printf("The matrix is not a tri-diagonal matrix.\n");
    }

    return 0;
}