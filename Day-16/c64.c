#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int index = 1;
    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (arr[i] == arr[j])
                break;
        }
        if (j == index) {
            arr[index++] = arr[i];
        }
    }
    return index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    return 0;
}
