//c program to seperate 0s and 1s in an array
#include <stdio.h>
int main() {
    int n, i, j = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements of the array
    printf("Enter the elements of the array (0s and 1s only):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] != 0 && arr[i] != 1) {
            printf("Invalid input. Please enter only 0s and 1s.\n");
            return 1;
        }
    }

    // Separate 0s and 1s
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            arr[j++] = 0; // Place 0 at the current position
        }
    }
    
    for (i = j; i < n; i++) {
        arr[i] = 1; // Fill remaining positions with 1s
    }

    // Print the modified array
    printf("Array after separating 0s and 1s:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}