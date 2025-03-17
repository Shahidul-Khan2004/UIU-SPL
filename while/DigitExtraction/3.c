#include <stdio.h>

int main (void) {
    int n, n_cpy, n_reversed = 0;
    scanf("%d", &n);
    n_cpy = n;
    while (n != 0) {
        n_reversed *= 10;
        n_reversed += n % 10;
        n /= 10;
    }
    (n_cpy == n_reversed) ? printf("Palindrome") : printf("Not palindrome");
}