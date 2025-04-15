#include <stdio.h>

int main (void) {
    int n, pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("position: ");
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
}