#include <stdio.h>
#include <string.h>

#define CHAR 256

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int freq[CHAR] = {0};
    for (int i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for (int i = 0; str[i]; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found.\n");
    return 0;
}
