#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i == 1 || i + j == n + 1) printf("7");
            else printf(" ");
        }
        printf("\n");
    }
}