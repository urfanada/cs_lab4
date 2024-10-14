#include <stdio.h>

int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min = find_min(arr, n);
    int max = find_max(arr, n);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) {
            printf("%d ", arr[i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != min && arr[i] != max) {
            printf("%d ", arr[i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
