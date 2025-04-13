#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int col = 2 * n - 1;
    for (int i = 1; i <= n; i++) {
        int k;
        if (i < n) k = i; else k = i - 1;
        for (int j = 1; j <= col; j++) {
            if (j <= i) printf("%d", j);
            else if (j <= col - i) printf(" ");
            else {
                printf("%d", k);
                k--;
            }
        }
        printf("\n");
    }
}