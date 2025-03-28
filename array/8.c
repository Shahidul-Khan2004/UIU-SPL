#include <stdio.h>

int main (void) {
    int n, max = -999999, min = 999999, index_max, index_min;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index_max = i;
        }
        if (arr [i] < min) {
            min = arr[i];
            index_min = i;
        }
    }
    printf("Max: %d, Index: %d\nMin: %d, Index: %d", max, index_max, min, index_min);
}