#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1, m = 1; i <= n; i++, m += 2) {
        for (int j = 1; j <= n - i; j++) {
            printf("_");
        }
        for (int k = 1; k <= m; k++) {
            printf("*");
        }
        printf("\n");
    }
}