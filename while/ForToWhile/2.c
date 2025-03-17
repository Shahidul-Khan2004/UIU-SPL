#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int i = 0, j = 1;
    while (i < n)
    {
        printf("%d ", j);
        i++; j += 2;
    }
}