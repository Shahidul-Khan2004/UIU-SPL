#include <stdio.h>

int main (void) {
    int n;
    float sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        float num;
        scanf("%f", &num);
        sum += num;
    }
    printf("AVG of %d inputs: %f", n, sum / n);
}