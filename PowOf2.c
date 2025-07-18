//C program to check given number is a power of 2 or not
#include <stdio.h>
int isPowerOf2(int num) {
    // A number is a power of 2 if it is greater than 0 and the bitwise AND of the number and its predecessor is 0
    return (num > 0 && (num & (num - 1)) == 0);
}
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a power of 2
    if (isPowerOf2(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    return 0;
}