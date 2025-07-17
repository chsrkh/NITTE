//C Program to find the nearest prime number in an array

#include <stdio.h>
#include <stdbool.h>    
#include <math.h>
#define MAX 100
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}   
int nearest_prime(int arr[], int size, int num) {
    int nearest = -1;
    int min_diff = MAX;

    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            int diff = abs(arr[i] - num);
            if (diff < min_diff) {
                min_diff = diff;
                nearest = arr[i];
            }
        }
    }
    return nearest;
}
int main() {
    int arr[MAX], size, num;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number to find nearest prime
    printf("Enter the number to find nearest prime: ");
    scanf("%d", &num);

    int result = nearest_prime(arr, size, num);
    
    if (result != -1) {
        printf("The nearest prime number to %d is %d\n", num, result);
    } else {
        printf("No prime number found in the array.\n");
    }

    return 0;
}