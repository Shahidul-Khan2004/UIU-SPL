#include <stdio.h>

int main (void) {
    int n1, n2, *p1 = &n1, *p2 = &n2;
    scanf("%d %d", p1, p2);
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("%d %d", n1, n2);
}