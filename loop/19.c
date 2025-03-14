#include <stdio.h>
#include <math.h>

int main() {
    float x, sum = 0, term;
    scanf("%f", &x);

    term = x;

    for (int i = 1; fabs(term) > 0.001; i++) {
        sum += term;
        
        term *= -pow(x,2) / ((2 * i) * (2 * i + 1));
    }
    printf("%.3f", sum);

    return 0;
}