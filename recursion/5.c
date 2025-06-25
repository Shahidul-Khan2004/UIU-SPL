#include <stdio.h>

int largestnum (int arr[], int n);

int main (void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", largestnum(arr, n));
}

int largestnum (int arr[], int n) {
    int largerst = arr[n - 1];
    if (n == 1) return largerst;
    int max_of_rest = largestnum(arr, n - 1);
    if (largerst < max_of_rest) return max_of_rest;
    else return largerst;
}