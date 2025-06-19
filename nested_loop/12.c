#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int m = n / 2 + 1;
    for (int i = 1, p = 1; i <= m; i++, p += 2) {
        for (int j = 1; j <= m - i; j ++) printf("_");
        for (int k = 1; k <= p; k++) printf("*");
        printf("\n");
    }
    for (int i = 1, q = n - 2; i < m; i++, q -= 2) {
        for (int j = 1; j <= i; j++) printf("_");
        for (int k = 1; k <= q; k++) printf("*");
        printf("\n");
    }
}