#include <stdio.h>

int count_digits(int n);

int main (void) {
    int n;
    scanf("%d", &n);
    printf("%d", count_digits(n));
}

int count_digits(int n) {
    int count = 1;
    if(n == 0) return 0;
    return count + count_digits(n / 10);
}