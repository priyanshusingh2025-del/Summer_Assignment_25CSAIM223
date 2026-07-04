#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++) {
            C[i][j] = 0;
            for(int k=0;k<SIZE;k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Resultant Matrix (A*B):\n");
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
