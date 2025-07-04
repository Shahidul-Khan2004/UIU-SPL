#include <stdio.h>
#include <math.h>

int is_prime (int x);
int power_of_2(int x);
int is_mersenne (int x);

int main (void) {
    int n;
    scanf("%d", &n);
    if(is_mersenne(n)) printf("yes");
    else printf("No");
}

int is_prime (int x) {
    int flag = 1;
    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) flag = 0;
    }
    return flag;
}

int power_of_2(int x) {
    if (floor(log2(x)) == ceil(log2(x))) return 1;
    else return 0;
}

int is_mersenne (int x) {
    if(is_prime(x) && power_of_2(x + 1)) return 1;
    else return 0;
}