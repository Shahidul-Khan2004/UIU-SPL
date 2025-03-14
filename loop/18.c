#include <stdio.h>

int main (void) {
    int n, nTemp, nReveresd = 0, rem;
    scanf("%d", &n);
    nTemp = n;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        nReveresd = nReveresd * 10 + rem;
    }
    (nTemp == nReveresd) ? printf("Yes") : printf("No");
}