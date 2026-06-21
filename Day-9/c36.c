#include <stdio.h>

int main() {
    int i, j, n = 5;  // size of square

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print * for first/last row OR first/last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");  // space inside
            }
        }
        printf("\n");  // move to next line
    }

    return 0;
}
