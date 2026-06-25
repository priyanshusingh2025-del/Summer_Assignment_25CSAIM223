#include <stdio.h>

void mergeArrays(int a[], int n1, int b[], int n2, int c[]) {
    for(int i=0; i<n1; i++) c[i] = a[i];
    for(int j=0; j<n2; j++) c[n1+j] = b[j];
}

int main() {
    int a[5] = {1,2,3,4,5}, b[3] = {6,7,8}, c[8];
    mergeArrays(a,5,b,3,c);
    printf("Merged Array: ");
    for(int i=0;i<8;i++) printf("%d ",c[i]);
    return 0;
}
