#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 0, j = 1; i < n; i++, j++)
        i < n - 1 ? printf("%d, ", j) : printf("%d", j);
}