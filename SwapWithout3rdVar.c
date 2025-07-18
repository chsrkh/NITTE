//c program to swap two numbers without using a third variable
#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using arithmetic operations
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract the new value of a with b to get original value of a
    a = a - b; // Step 3: Subtract the new value of b from the new value of a to get original value of b

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}