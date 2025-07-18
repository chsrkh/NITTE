//C program to find the missing element in an array
#include <stdio.h>
int main() {
    int n, i, sum = 0, expectedSum;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements of the array
    printf("Enter the elements of the array (1 to %d):\n", n + 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum of entered elements
    }

    // Calculate the expected sum of first n natural numbers
    expectedSum = (n * (n + 1)) / 2;

    // The missing element is the difference between expected sum and actual sum
    int missingElement = expectedSum - sum;

    // Print the missing element
    printf("The missing element in the array is: %d\n", missingElement);

    return 0;
}