#include <stdio.h>

void even (int x, int y);
void odd (int x, int y);

int main (void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("Even Numners: ");
    even(n1, n2);
    printf("\nOdd Number: ");
    odd(n1, n2);
}

void even (int x, int y) {
    if (y == x && x % 2 == 0) {
        printf("%d ", x);
        return;
    }
    else if (y == x) return;
    if (x % 2 == 0) printf("%d, ", x);
    even(x + 1, y);
}

void odd (int x, int y) {
    if (y == x && x % 2 == 1) {
        printf("%d ", x);
        return;
    }
    else if (y == x) return;
    if (x % 2 == 1) printf("%d, ", x);
    odd(x + 1, y);
}