#include <stdio.h>

int main (void) {
    int n, num, occ = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) occ++;
    }
    if (occ > 0) {
        int pos[occ];
        for (int i = 0, j = 0; i < n; i++) {
            if (arr[i] == num) {
                pos[j] = i;
                j++;
            }
        }   
        printf("FOUND at the index position: ");
        for (int i = 0; i < occ; i++) {
            printf("%d", pos[i]);
            if (i != occ - 1) printf(", ");
        }   
    }
    else printf("NOT FOUND");
}