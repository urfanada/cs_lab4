#include <stdio.h>

int main() {
    int n, i, idx, el;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int arr[n+1];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index and element to insert (idx el): ");
    scanf("%d %d", &idx, &el);

    if (idx < 0 || idx > n) {
        printf("Invalid input\n");
    } else {
        for(i = n; i > idx; i--) {
            arr[i] = arr[i - 1];
        }

        arr[idx] = el;

        printf("New array:\n");
        for(i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
