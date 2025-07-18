//C program to check if given number is an Armstrong number or not
#include <stdio.h>
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digitCount = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digitCount++;
    }

    originalNum = num;

    // Calculate the sum of the digits raised to the power of digitCount
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }

    // Check if the sum equals the original number
    return sum == num;
}