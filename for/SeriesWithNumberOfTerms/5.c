#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 0, j = 1; i < n; i++, j*=2)
        printf("%d ", j);
}