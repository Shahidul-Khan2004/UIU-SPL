#include <stdio.h>

int main (void) {
    int n, sum;
    scanf("%d", &n);
    for (int i = 0, j = 1; i < n; i++, j++) sum += j;
    
    printf("%d\n", sum);
}