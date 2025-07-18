//c program to print all co-prime triplets in a given range
#include <stdio.h>
int isCoPrime(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a == 1; // If GCD is 1, they are co-prime
}
int main() {
    int start, end, i, j, k;

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

    // Print co-prime triplets
    printf("Co-prime triplets in the range [%d, %d] are:\n", start, end);
    for (i = start; i <= end - 2; i++) {
        for (j = i + 1; j <= end - 1; j++) {
            for (k = j + 1; k <= end; k++) {
                if (isCoPrime(i, j) && isCoPrime(j, k) && isCoPrime(i, k)) {
                    printf("(%d, %d, %d)\n", i, j, k);
                }
            }
        }
    }

    return 0;
}