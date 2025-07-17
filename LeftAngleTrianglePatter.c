//C program to print left angle triangle pattern
#include <stdio.h>
int main() {
    int rows, i, j;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}