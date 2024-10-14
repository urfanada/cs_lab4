#include <stdio.h>

void print_fibonacci_in_range(int x, int y) {
    int a = 0, b = 1, fib = 0;
    int found = 0;

    while (fib <= y) {
        if (fib >= x) {
            printf("%d ", fib);
            found = 1;
        }
        fib = a + b;
        a = b;
        b = fib;
    }
    
    if (!found) {
        printf("DO NOT EXIST");
    }
    printf("\n");
}

int main() {
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF) {
        print_fibonacci_in_range(x, y);
    }
    
    return 0;
}
