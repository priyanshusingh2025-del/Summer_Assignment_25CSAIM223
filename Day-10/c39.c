#include <stdio.h>

int main() {
    int i, j, n = 5;  // number of rows

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers from i-1 to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // move to next line
    }

    return 0;
}
