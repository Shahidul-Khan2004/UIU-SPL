#include <stdio.h>

int main (void) {
    int x, y, gcd, lcm;
    scanf("%d %d", &x, &y);
    for (int i = 0, j = 1; i < x && i < y; i++, j++) {
        if (x % j == 0 && y % j == 0) gcd = j;
    }
    lcm = (x * y) / gcd;
    printf("GCD: %d\nLCM: %d", gcd, lcm);
}