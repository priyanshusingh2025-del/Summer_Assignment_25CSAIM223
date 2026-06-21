#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';   // starting character

    for (i = 1; i <= 5; i++) {       // loop for rows
        for (j = 1; j <= i; j++) {   // loop for repeating characters
            printf("%c", ch);
        }
        printf("\n");   // move to next line
        ch++;           // move to next character
    }

    return 0;
}
