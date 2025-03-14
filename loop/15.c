#include <stdio.h>

int main (void) {
    int x, y, res = 1;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < y; i++) res *= x ;
    
    printf("%d\n", res);
}