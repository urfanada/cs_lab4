#include <stdio.h>

int find_insert_position(int arr[], int n, int element) {
    int low = 0, high = n;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int element;
    scanf("%d", &element);
    
    int pos = find_insert_position(arr, n, element);
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    
    printf("%d\n", pos);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
