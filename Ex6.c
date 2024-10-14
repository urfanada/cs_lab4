#include <stdio.h>

void count_elements(int arr[], int n) {
    int freq[100001] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 100001; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    count_elements(arr, n);
    
    return 0;
}
