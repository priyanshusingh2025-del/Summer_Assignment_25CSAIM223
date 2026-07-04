#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    if(strlen(s1) != strlen(s2)) return 0;
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[] = "Microsoft";
    char s2[] = "softMicro";
    if(isRotation(s1, s2))
        printf("Yes, %s is a rotation of %s\n", s2, s1);
    else
        printf("No, not a rotation\n");
    return 0;
}
