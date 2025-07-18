// c Programt to check if a numebr is a Navie Number or not
#include <stdio.h>
int isNaviNum(int num) {
    int sum = 0, i;

    // Check if the number is less than 1
    if (num < 1) {
        return 0; // Not a Navi Number
    }

    // Calculate the sum of divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // A Navi Number is one where the sum of its divisors equals the number itself
    return (sum == num);
}