#include <stdio.h>
#include <string.h>

int main() {
    char str[200], newStr[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            newStr[j++] = str[i];
    }
    newStr[j] = '\0';

    printf("String without spaces: %s\n", newStr);

    return 0;
}
