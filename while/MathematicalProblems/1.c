#include <stdio.h>

int main (void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int GCD = 1, j = 1;
    while (j <= n1 && j <= n2)
    {
        if (n1 % j == 0 && n2 % j == 0) GCD = j;
        j++;
    }
    printf("%d", GCD);
}