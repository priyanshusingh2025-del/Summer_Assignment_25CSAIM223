#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; // sum of 1..n+1
    for (int i = 0; i < n; i++)
        total -= arr[i];
    return total;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // missing 3
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Missing number: %d\n", findMissing(arr, n));
    return 0;
}
