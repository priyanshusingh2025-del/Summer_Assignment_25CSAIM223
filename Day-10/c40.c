#include <stdio.h>

int main() {
    int i, j, n = 5;  // number of rows

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing characters from 'A' to 'A' + (i-1)
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters from 'A' + (i-2) down to 'A'
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n"); // move to next line
    }

    return 0;
}
