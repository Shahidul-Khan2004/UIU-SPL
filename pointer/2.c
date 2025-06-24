#include <stdio.h>

int main (void) {
    int n1, n2;
    int *p1 = &n1, *p2 = &n2;

    scanf("%d %d", p1, p2);

    if(*p1 > *p2) printf("%d is the largest",*p1);
    else if(*p1 < *p2) printf("%d is the largest",*p2);
    else printf("both are equal");
}