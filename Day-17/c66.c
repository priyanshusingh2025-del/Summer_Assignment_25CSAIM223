#include <stdio.h>

int isPresent(int arr[], int n, int x) {
    for(int i=0;i<n;i++) if(arr[i]==x) return 1;
    return 0;
}

int main() {
    int a[5]={1,2,3,4,5}, b[5]={4,5,6,7,8}, c[10], k=0;
    for(int i=0;i<5;i++) c[k++] = a[i];
    for(int j=0;j<5;j++) if(!isPresent(c,k,b[j])) c[k++] = b[j];
    printf("Union: ");
    for(int i=0;i<k;i++) printf("%d ",c[i]);
    return 0;
}
