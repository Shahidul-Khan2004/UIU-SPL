#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    n = (n / 2) + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            (j <= n - i) ? printf("_") : printf("*");
        }
        for (int k = 1; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            (j <= i) ? printf("_") : printf("*");
        }
        for (int k = 1; k < n - i; k++) {
            printf("*");
        }
        printf("\n");
    }
}