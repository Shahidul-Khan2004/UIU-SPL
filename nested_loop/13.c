#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            (j <= i) ? printf("%d", j) : printf("_");
        }
        for (int k = 1; k <= n - 1; k++) {
            (k < n - i) ? printf("_") : printf("%d", k);
        }
        printf("\n");
    }
}