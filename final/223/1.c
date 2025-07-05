#include <stdio.h>

int DNumber (int a);
int checkerFunc1 (int a);
int primeChecker (int a);

int main (void) {
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (DNumber(i) == 1) printf("%d ", i);
    }
}

int DNumber (int a) {
    if (checkerFunc1(a) == 1 && primeChecker(a) == 1) return 1;
    else return -1;
}

int checkerFunc1 (int a) {
    int sumOdd = 0, sumEven = 0;
    while (a != 0) {
        int rem = a % 10;
        if (rem % 2 == 0) sumEven += rem;
        else sumOdd += rem;
        a /= 10;
    }
    if (sumOdd < sumEven) return 1;
    else return -1;
}

int primeChecker (int a) {
    int flag = 1;
    for (int i = 2; i < a / 2 + 1; i++) {
        if (a % i == 0) flag = -1;
    }
    return flag;
}