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

    int max = -1;
    char result;
    for (int i = 0; str[i]; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }
    printf("Maximum occurring character: %c\n", result);
    return 0;
}
