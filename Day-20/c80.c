#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE];
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    for(int j=0;j<SIZE;j++) {
        int sum = 0;
        for(int i=0;i<SIZE;i++)
            sum += A[i][j];
        printf("Sum of column %d = %d\n", j+1, sum);
    }
    return 0;
}
