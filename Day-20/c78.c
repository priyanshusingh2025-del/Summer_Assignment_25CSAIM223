#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE], flag=1;
    printf("Enter elements of matrix A:\n");
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            scanf("%d",&A[i][j]);

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            if(A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }

    if(flag)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is NOT Symmetric\n");

    return 0;
}
