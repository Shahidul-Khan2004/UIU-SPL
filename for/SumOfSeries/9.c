#include <stdio.h>

int main (void) {
    int n, sum;
    scanf("%d", &n);
    for (int i = 0, j = 1, k = 2; i < n; i++, j++, k++) sum += j * k;
    
    printf("%d\n", sum);
}