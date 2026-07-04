#include <stdio.h>
#include <string.h>

void longestWord(char *sentence) {
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    while(sentence[i] != '\0') {
        if(sentence[i] != ' ') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if(strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    if(strlen(word) > maxLen) strcpy(longest, word);

    printf("Longest word: %s\n", longest);
}

int main() {
    char sentence[] = "TCS Infosys Wipro Technologies";
    longestWord(sentence);
    return 0;
}
