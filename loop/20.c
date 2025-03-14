#include <stdio.h>

int main (void) {
    int n, sum;
    scanf("%d", &n);
    for (int i = 0, j = 1, k = 0; i < n; i++, j++) {
        k = k * 10 + j;
        sum += k;
    }
    printf("%d", sum);
}