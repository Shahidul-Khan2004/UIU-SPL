#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int rev_arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        rev_arr[j] = arr[i];
    }
    for (int i = 0; i < n; i++) printf("%d ", rev_arr[i]);
}