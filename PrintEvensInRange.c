//C program to print even numbers in a given range
#include <stdio.h>
int main() {
    int start, end;

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

    // Print even numbers in the range
    printf("Even numbers in the range [%d, %d] are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}