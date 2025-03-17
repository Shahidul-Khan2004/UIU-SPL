#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1, k = n; j <= i; j++, k--) {
            printf("%d", k);
        }
        printf("\n");
    }
}