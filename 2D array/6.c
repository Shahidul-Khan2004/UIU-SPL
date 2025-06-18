#include <stdio.h>

int main (void) {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr1[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) scanf("%d", &arr1[i][j]);
    };
    int arr2[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) scanf("%d", &arr2[i][j]);
    };
    int arr3[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) arr3[i][j] = arr2[i][j] + arr1[i][j];
    };
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {printf("%d ", arr3[i][j]);}
        printf("\n");
    };
}