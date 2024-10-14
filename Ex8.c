#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int current, min = INT_MAX, max = INT_MIN;
    int sum = 0;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Invalid input: At least 3 elements are required.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &current);

        if (current < min) {
            min = current;
        }
        if (current > max) {
            max = current;
        }
        sum += current;
    }

    sum -= (min + max);
    printf("Sum of elements excluding the minimum and maximum: %d\n", sum);

    return 0;
}
