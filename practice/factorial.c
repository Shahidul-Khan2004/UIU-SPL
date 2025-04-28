#include <stdio.h>

int Factorial(int x);

int main (void) {
    int n = 5;
    int factorial = Factorial(n);
    printf("%d", factorial);
}

int Factorial (int x) {
    if(x == 1) return 1;
    return x * Factorial(x - 1);
}
