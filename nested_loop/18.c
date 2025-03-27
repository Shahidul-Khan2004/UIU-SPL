#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            (i == n / 2 + 1 || j == 1 || j == n) ? printf("H") : printf(" ");
        }
        printf("\n");
    }
}