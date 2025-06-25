#include <stdio.h>

void jump_one_num (int x, int y);

int main (void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("Even Numners: ");
    (n1 % 2 == 0) ? jump_one_num(n1, n2) : jump_one_num(n1 + 1, n2);
    printf("\nOdd Number: ");
    (n1 % 2 == 1) ? jump_one_num(n1, n2) : jump_one_num(n1 + 1, n2);
}

void jump_one_num (int x, int y) {
    if (x > y) return;
    printf("%d ", x);
    jump_one_num(x + 2, y);
}