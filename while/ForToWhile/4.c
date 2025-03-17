#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int j = 2, flag = 0;
    while (j < n)
    {
        if (n % j == 0) flag = 1;
        j++;
    }
    (flag == 1) ? printf("Not prime") : printf("Prime");
}