#include <stdio.h>

int main (void) {
    int n;
    int *p = &n;
    scanf("%d", p);
    printf("%d", *p);
}