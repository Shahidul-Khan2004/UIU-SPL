#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int col = 2 * n - 1;
    for (int i = 1, p = col - 2; i <= n; i++, p -= 2) {
        for (int j = 1; j <= i; j++) printf("%d", j);
        for (int k = 1; k <= p; k++) printf("_");
        if (i < n) {
            for (int l = i; l >= 1; l--) printf("%d", l);
        } else {
            for (int l = i - 1; l >= 1; l--) printf("%d", l);
        }
        printf("\n");
    }
}