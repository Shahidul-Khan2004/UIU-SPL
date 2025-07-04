#include <stdio.h>

int is_prime (int x);
int digit_sum (unsigned int x);
int is_superprime(int x);

int main (void) {
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if(is_superprime(i)) printf("%d\n", i);
    }
}

int is_prime (int x) {
    int flag = 1;
    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) flag = 0;
    }
    return flag;
}

int digit_sum (unsigned int x) {
    int sum = 0;
    while (x != 0) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}

int is_superprime(int x) {
    if(is_prime(x) && is_prime(digit_sum(x))) return 1;
    else return 0;
}