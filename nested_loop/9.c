#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 != 0) {
                (j % 2 == 0) ? printf("0") : printf("1");
            }
            else {
                (j % 2 == 0) ? printf("1") : printf("0");
            }
        }
        printf("\n");
    }
}