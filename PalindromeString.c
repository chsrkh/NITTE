//C program to check if a string is a palindrome
#include <stdio.h>
#include <string.h>
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    // Check characters from both ends towards the center
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}
int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
