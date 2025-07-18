//c program tp check given number is a three D prime number or not
// A number is a prime and the sum of its digits is also a prime number and each digit is a prime number is called as three D prime number
#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Is a prime number
}
int isThreeDPrime(int num) {
    if (!isPrime(num)) return 0; // Check if the number itself is prime

    int sum = 0, originalNum = num;

    // Check each digit and calculate the sum of digits
    while (originalNum > 0) {
        int digit = originalNum % 10;
        if (!isPrime(digit)) return 0; // If any digit is not prime, return false
        sum += digit;
        originalNum /= 10;
    }

    // Check if the sum of digits is prime
    return isPrime(sum);
}
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a three D prime number
    if (isThreeDPrime(num)) {
        printf("%d is a three D prime number.\n", num);
    } else {
        printf("%d is not a three D prime number.\n", num);
    }

    return 0;
}