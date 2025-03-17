#include <stdio.h>
#include <math.h>

int main (void) {
    int n, n_temp, n_cpy, len = 0, sum = 0;
    scanf("%d", &n);
    n_temp = n;
    n_cpy = n;
    while (n_temp != 0) {
        n_temp /= 10;
        len++;
    }
    while (n != 0) {
        sum += pow(n % 10, len);
        n /= 10;
    }
    (n_cpy == sum) ? printf("Armstrong") : printf("Not Armstrong");
}