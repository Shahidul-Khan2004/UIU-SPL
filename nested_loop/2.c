#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1, k = i; j <= n; j++, k++) {
            printf("%d", k);
        }
        printf("\n");
    }
}