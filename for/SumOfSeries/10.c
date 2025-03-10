#include <stdio.h>

int main (void) {
    int n, sum;
    scanf("%d", &n);
    for (int i = 0, j = 2, k = 5; i < n; i++, j*=2, k+=3) sum += j * k;
    
    printf("%d\n", sum);
}