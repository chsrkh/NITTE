//c program to print diagonal elements of a matrix
#include <stdio.h>  
int main() {
    int rows, cols, i, j;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array
    int matrix[rows][cols];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print diagonal elements
    printf("Diagonal elements are:\n");
    for (i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]);
    }
    
    printf("\n");

    return 0;
}