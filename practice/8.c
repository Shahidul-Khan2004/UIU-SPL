#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || i == n / 2 + 1) printf("8");
            else if (j == 1 || j == n) printf("8");
            else printf(" ");
            }
        printf("\n");
    }
}