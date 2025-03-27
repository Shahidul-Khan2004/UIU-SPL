#include <stdio.h>

int main (void) {
    int n, k, l, m;
    scanf("%d", &n);
    int x = n / 2 + 1;
    
    for (int i = 1, l = x, m = x; i <= x; i++, l--, m++) {
        for (int j = 1; j <= n; j++) {
            (i == x || j == x || j == l || j == m) ? printf("$") : printf("_");
        }
        printf("\n");
    }
    for (int i = 1, l = 2, m = n - 1; i < x; i++, l++, m--) {
        for (int j = 1; j <= n; j++) {
            (j == x || j == l || j == m) ? printf("$") : printf("_");
        }
        printf("\n");
    }
}