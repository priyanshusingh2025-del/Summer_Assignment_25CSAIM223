#include <stdio.h>

int main() {
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second = -2147483648; // minimum int value

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element.\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
