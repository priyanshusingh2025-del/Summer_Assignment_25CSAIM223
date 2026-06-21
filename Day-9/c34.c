#include <stdio.h>

int main() {
    int i, j, n = 5;  // number of rows

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // move to next line
    }

    return 0;
}
