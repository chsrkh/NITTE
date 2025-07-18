//c prog to check if a number is a Perfect Square Root or not
#include <stdio.h>
int isPerfectSquare(int num) {
    if (num < 0) return 0; // Negative numbers cannot be perfect squares
    int root = 0;
    while (root * root < num) {
        root++;
    }
    return (root * root == num); // Check if the square of the root equals the number
}
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a perfect square
    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}