#include <stdio.h>

int main (void) {
    int m;
    scanf("%d", &m);
    int arr[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
    };
    printf("Major diagonal: ");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++) {
            if (i == j) printf("%d ", arr[i][j]);
        }
    };
    printf("Minor diagonal: ");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++) {
            if (i + j == m - 1) printf("%d ", arr[i][j]);
        }
    };
}