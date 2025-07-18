//C program to demonstrate a 3D array
#include <stdio.h>
int main() {
    int x, y, z, i, j, k;

    // Input dimensions of the 3D array
    printf("Enter the dimensions of the 3D array (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    // Declare a 3D array
    int array[x][y][z];

    // Input elements of the 3D array
    printf("Enter the elements of the 3D array:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            for (k = 0; k < z; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    // Print the elements of the 3D array
    printf("The elements of the 3D array are:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            for (k = 0; k < z; k++) {
                printf("Element [%d][%d][%d]: %d\n", i, j, k, array[i][j][k]);
            }
        }
    }

    return 0;
}