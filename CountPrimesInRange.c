//c Program to count the number of prime numbers in a given range
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Is a prime number
}
int main() {
    int start, end, count = 0;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Validate the range
    if (start > end) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    // Count prime numbers in the range
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    // Print the result
    printf("Number of prime numbers in the range [%d, %d]: %d\n", start, end, count);

    return 0;
}
