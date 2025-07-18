//C program to check if a number is a palindrome
#include <stdio.h>
int isPalindrome(int num) {
    int reversed = 0, original = num;

    // Reverse the number
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}
int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}