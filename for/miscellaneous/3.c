#include <stdio.h>

int main (void) {
    int a, n, res = 1;
    scanf("%d %d", &a, &n);
    for (int i = 0; i < n; i++) res *= a ;
    
    printf("%d\n", res);
}