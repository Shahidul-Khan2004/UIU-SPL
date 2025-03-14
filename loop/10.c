#include <stdio.h>

int main (void) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0, j = 1; i < n; i++, j++) {
        if (i % 2 == 0) j *= - 1;
        sum += j;
    }
    printf("Result: %d", sum);
}