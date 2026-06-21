#include <stdio.h>

int main() {
    int i, j, n = 5;  // number of rows

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars (2*i - 1 stars per row)
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n"); // move to next line
    }

    return 0;
}
