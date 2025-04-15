#include <stdio.h>

int main (void) {
    int n, num, pos;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("number: ");
    scanf("%d", &num);
    printf("position: ");
    scanf("%d", &pos);
    for (int i = n - 1; i >= pos; i--) arr[i + 1] = arr[i];
    arr[pos] = num;
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
}