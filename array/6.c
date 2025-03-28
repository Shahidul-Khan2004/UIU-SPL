#include <stdio.h>

int main (void) {
    int n; 
    scanf("%d", &n);
    int arr_0[n];
    int arr_1[n];
    int sum[n]; for (int i = 0; i < n; i ++) sum[i] = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_0[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i < n; i++) {
        sum[i] += arr_0[i] + arr_1[i];
    }
    for (int i = 0; i < n; i++) printf("%d ", sum[i]);
}