#include <stdio.h>

int maxFrequencyElement(int arr[], int n) {
    int maxCount = 0, element = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }
    return element;
}

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Max frequency element: %d\n", maxFrequencyElement(arr, n));
    return 0;
}
