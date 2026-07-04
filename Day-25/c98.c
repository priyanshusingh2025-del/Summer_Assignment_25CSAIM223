#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    printf("Common characters: ");
    for(int i=0; i<strlen(str1); i++) {
        for(int j=0; j<strlen(str2); j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }
    return 0;
}
