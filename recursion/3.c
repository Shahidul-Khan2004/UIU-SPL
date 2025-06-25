#include <stdio.h>

void printArr (int arr[], int n);

int main (void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printArr(arr, n);
}

void printArr (int arr[], int n) {
    if (n == 0) return;
    printArr(arr, n - 1);
    printf("%d ", arr[n - 1]);
}