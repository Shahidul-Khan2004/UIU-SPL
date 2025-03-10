#include <stdio.h>

int main (void) {
    int n, sum;
    scanf("%d", &n);
    for (int i = 0, j = 10; i < n; i++, j*=3) sum += j;
    
    printf("%d\n", sum);
}