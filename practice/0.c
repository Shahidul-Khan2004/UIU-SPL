#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i + j == n + 1) printf("0");
            else printf(" ");
            }
        printf("\n");
    }
}