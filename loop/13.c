#include <stdio.h>

int main (void) {
    int n, factorial = 1;
    scanf("%d", &n);
    printf("%d! = ", n);
    for (int i = 0, j = n; i < n; i++, j--) {
        factorial *= j;
        (j != 1) ? printf("%d X ", j) : printf("%d", j);
    }
    printf(" = %d", factorial);
}