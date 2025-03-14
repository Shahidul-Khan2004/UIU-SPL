#include <stdio.h>

int main (void) {
    int x, y;
    scanf("%d %d", &x, &y);
    while (x < y) {
        printf("%d, ", x * x);
        x++;
    }
    while (x > y) {
        printf("%d, ", x * x);
        x--;
    }
    while (x == y) {
        printf("Reached!");
        break;
    }
}