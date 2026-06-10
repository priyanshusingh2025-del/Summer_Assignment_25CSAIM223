#include <stdio.h>

int main() {
    int num, org, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;   

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (org == rev)
        printf("%d is a Palindrome.\n", org);
    else
        printf("%d is NOT a Palindrome.\n", org);

    return 0;
}
