#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        i % 2 == 0 ? printf("1") : printf("0");
        i < n - 1 ? printf(", ") : printf("\n");
    }
}