#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            (i == j || j == n - i + 1) ? printf("*") : printf ("_");
        }
        printf("\n");
    }
}