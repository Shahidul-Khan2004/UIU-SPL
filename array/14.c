#include <stdio.h>

int main (void) {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int temp[n1];
    for (int i = 0; i < n1; i++) {
        temp[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr1[i] = arr2[i];
    }
    printf("Array A: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < n1; i++) {
        arr2[i] = temp[i];
    }
    printf("\nArray B: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr2[i]);
    }
}