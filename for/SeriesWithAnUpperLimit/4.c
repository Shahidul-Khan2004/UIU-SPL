#include <stdio.h>

int main (void) {
    int n, num;
    scanf("%d", &n);
    for (int i = 0, j = 3; j <= n; i++, j*=2) num = j;
    printf("%d ", num);
}