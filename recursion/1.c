#include <stdio.h>

int summ (int n);

int main (void) {
    int n;
    scanf("%d", &n);
    printf("%d", summ(n));
}

int summ (int n) {
    if (n == 0) return 0;
    return n + summ(n - 1);
}