//c Program to calculate the absolute difference of diagonal elements of a matrix
#include <stdio.h>  
int main() {
    int rows, cols, i, j;
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if the matrix is square
    if (rows != cols) {
        printf("The matrix must be square to calculate diagonal differences.\n");
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

    // Calculate sums of primary and secondary diagonals
    for (i = 0; i < rows; i++) {
        primaryDiagonalSum += matrix[i][i]; // Primary diagonal
        secondaryDiagonalSum += matrix[i][rows - 1 - i]; // Secondary diagonal
    }

    // Calculate absolute difference
    int absDifference = primaryDiagonalSum - secondaryDiagonalSum;
    if (absDifference < 0) {
        absDifference = -absDifference; // Make it absolute
    }

    // Print the result
    printf("Absolute difference of diagonal elements: %d\n", absDifference);

    return 0;
}