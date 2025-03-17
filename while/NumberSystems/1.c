#include <stdio.h>

int main (void) {
    int n, rev_bin = 0, bin = 0, len = 0, len_bin = 0;
    scanf("%d", &n);
    if (n == 0) printf("%d", n);
    while (n != 0)
    {
        rev_bin *= 10;
        rev_bin += n % 2;
        n /= 2;
        len++;
    }
    while (rev_bin != 0)
    {
        bin *= 10;
        bin += rev_bin % 10;
        rev_bin /= 10;
        len_bin++;
    }
    while (len != len_bin)
    {
        printf("0");
        len_bin++;
    }
    printf("%d", bin);
}