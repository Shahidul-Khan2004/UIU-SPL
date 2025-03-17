#include <stdio.h>

int main (void) {
    int n, rev_oct = 0, oct = 0, len = 0, len_oct = 0;
    scanf("%d", &n);
    if (n == 0) printf("%d", n);
    while (n != 0) {
        rev_oct *= 10;
        rev_oct += n % 8;
        n /= 8;
        len++;
    }
    while (rev_oct != 0)
    {
        oct *= 10;
        oct += rev_oct % 10;
        rev_oct /= 10;
        len_oct++;
    }
    while (len != len_oct)
    {
        printf("0");
        len_oct++;
    }
    printf("%d", oct);
}