#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int hash[256] = {0};
    for(int i = 0; str[i] != '\0'; i++) {
        if(hash[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            hash[(unsigned char)str[i]] = 1;
        }
    }
}

int main() {
    char str[] = "MicrosoftAdobePaytm";
    removeDuplicates(str);
    return 0;
}
