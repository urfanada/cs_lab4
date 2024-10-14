#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    average = (float)sum / n;
    
    printf("Elements less than the average (%.2f):\n", average);
    for(i = 0; i < n; i++) {
        if(arr[i] < average) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
