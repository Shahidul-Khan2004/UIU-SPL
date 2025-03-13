#include <stdio.h>

int main (void) {
    int n, flag = 0;
    scanf("%d", &n);
    if (n == 1) printf("neither");
    for (int i = 0, j = 2; i < n - 2; i++, j++) {
        if (n % j == 0)
        {
            flag = 1;
        }
    }
    flag == 1 ? printf("Not prime") : printf("prime");
}