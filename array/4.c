#include <stdio.h>

int main (void) {
    int n;
    float sum = 0, avg;
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = sum / n;
    printf("%f", avg);
}