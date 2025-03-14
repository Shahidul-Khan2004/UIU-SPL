#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    for (int i = 10, p; ; i *= 10) {
        p = (n % i) / (i / 10);
        printf("%d", p);
        if (n % i == n) break;
    }
}