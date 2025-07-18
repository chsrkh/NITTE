//c program to find the largest prime number in an array
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Is a prime number
}
int main() {
    int n, largestPrime = -1;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest prime number in the array
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]) && arr[i] > largestPrime) {
            largestPrime = arr[i];
        }
    }

    // Print the result
    if (largestPrime != -1) {
        printf("The largest prime number in the array is: %d\n", largestPrime);
    } else {
        printf("There are no prime numbers in the array.\n");
    }

    return 0;
}