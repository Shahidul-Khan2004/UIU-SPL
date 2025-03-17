#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1, k = n; i <= n; i++, k--) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n) printf("Z");
            else {
                (j == k) ? printf("Z") : printf(" ");
            }
        }
        printf("\n");
    }
}