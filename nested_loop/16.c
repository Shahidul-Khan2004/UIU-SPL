#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1, k = n; i <= n; i++, k--) {
        for (int j = 1; j <= n; j++) {
            (i == j || j == k) ? printf("*") : printf ("_");
        }
        printf("\n");
    }
}