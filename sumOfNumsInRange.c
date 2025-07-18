//c program to calculate the sum of numbers in a given range
#include <stdio.h>
int main() {
    int start, end, sum = 0, i;

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

    // Calculate the sum of numbers in the range
    for (i = start; i <= end; i++) {
        sum += i;
    }

    // Print the result
    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}