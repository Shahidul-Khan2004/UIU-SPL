#include <stdio.h>

int main (void) {
    int n, r, nfactorial = 1, nMinusrFactorial = 1;
    scanf("%d %d", &n, &r);
    for (int i = 0, j = n; i < n; i++, j--) nfactorial *= j;
    for (int i = 0, j = n - r; i < n - r; i++, j--) nMinusrFactorial *= j;
    
    printf("%d\n", nfactorial / nMinusrFactorial);
}