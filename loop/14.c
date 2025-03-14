#include <stdio.h>

int main (void) {
    int n, r, nfactorial = 1, rFactorial = 1, nMinusrFactorial = 1;
    scanf("%d %d", &n, &r);
    if (n >= r) {
        for (int i = 0, j = n; i < n; i++, j--) nfactorial *= j;
        for (int i = 0, j = n - r; i < n - r; i++, j--) nMinusrFactorial *= j;
        for (int i = 0, j = r; i < r; i++, j--) rFactorial *= j;
        printf("%d\n", nfactorial / (rFactorial * nMinusrFactorial));
    }
    else printf("invalid!");
}