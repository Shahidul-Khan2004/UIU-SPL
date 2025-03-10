#include <stdio.h>

int main (void) {
    int n, factorial = 1;
    scanf("%d", &n);
    for (int i = 0, j = n; i < n; i++, j--) factorial *= j;
    
    printf("%d\n", factorial);
}