#include <stdio.h>
#include <math.h>

int main (void) {
    int n, n_temp, len = 0;
    scanf("%d", &n);
    n_temp = n;
    while (n_temp != 0) {
        n_temp /= 10;
        len++;
    }
    int divisor = pow(10, len - 2);
    printf("%d", n % 10);
    n /= 10;
    printf("%d", n % divisor);
    printf("%d", n / divisor);
}