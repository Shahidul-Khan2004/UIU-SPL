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
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    for (int i = 0; i < n2; i++) {
        for (int j = 0, k = 0; j < n1; j++) {
            if (arr1[j] != arr2[i]) k++;
            if (k == n1) printf("%d ", arr2[i]);
        }
    }
}