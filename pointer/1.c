#include <stdio.h>

int main (void) {
    int n1, n2;
    int *p1 = &n1, *p2 = &n2;

    scanf("%d %d", p1, p2);

    printf("%d", *p1 + *p2);
}