#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Q1: Capital of India?\n1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Q2: 2 + 2 = ?\n1. 3\n2. 4\n3. 5\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Q3: Largest planet?\n1. Earth\n2. Jupiter\n3. Mars\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Your final score: %d/3\n", score);

    return 0;
}
