#include <stdio.h>

int main (void) {
    int n, num1 = 1, num2 = 1, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i == 0) printf("%d, %d,", num1, num2);
        sum = num1 + num2;
        printf(" %d", sum);
        num1 = num2;
        num2 = sum;
        if (i != n - 1) printf(",");
    }
}