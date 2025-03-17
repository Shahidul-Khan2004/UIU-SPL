#include <stdio.h>

int main (void) {
    int n, sum = 0;
    scanf("%d", &n);
    int i = 0, j = 1, k = 3;
    while (i < n)
    {
        sum += j * k;
        i++; j *= 2; k += 3;
    }
    printf("%d", sum);
}