#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;   // base case
    } else {
        return reverseNumber(n / 10, rev * 10 + (n % 10));  // recursive step
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Reversed number = -%d\n", reverseNumber(-num, 0));  // handle negatives
    } else {
        printf("Reversed number = %d\n", reverseNumber(num, 0));
    }

    return 0;
}
