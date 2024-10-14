#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements smaller than their neighbors:\n");

    if (n > 1 && arr[0] < arr[1]) {
        printf("%d ", arr[0]);
    }

    for(i = 1; i < n - 1; i++) {
        if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
            printf("%d ", arr[i]);
        }
    }

    if (n > 1 && arr[n-1] < arr[n-2]) {
        printf("%d ", arr[n-1]);
    }

    return 0;
}
