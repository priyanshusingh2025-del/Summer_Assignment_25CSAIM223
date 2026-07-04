#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE], T[SIZE][SIZE];
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            T[j][i] = A[i][j];

    printf("Transpose of Matrix A:\n");
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++)
            printf("%d ",T[i][j]);
        printf("\n");
    }
    return 0;
}
