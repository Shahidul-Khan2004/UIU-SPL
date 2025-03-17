#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i, k = 1; k <= i; j++, k++) {
            printf("%d", j);
        }
        printf("\n");
    }
}