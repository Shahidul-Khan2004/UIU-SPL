#include <stdio.h>

int main (void) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0, j = 1, k = 2; i < n; i++, j++, k++) {
        sum += j * j * k;
    }
    printf("Result: %d", sum);
}