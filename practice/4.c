#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = 1, k = n; i <= n; i++, k -= 2) {
        for (int j = 1; j <= n; j++) {
            if (i == n / 2 + 1 || j == n) printf("4");
            else if (i < n / 2 + 1 && j == k) printf("4");
            else printf(" ");
        }
        printf("\n");
    }
}