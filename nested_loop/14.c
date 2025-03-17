#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 0) {
                (j != 1 && j != n) ? printf("_") : printf("*");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}