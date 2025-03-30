#include <stdio.h>

int main (void) {
    int n1, n2, common = 0;
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
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) common++;
        }
    }
    if (common == 0) printf("Empty set");
    else {
        int intersection[common];
        for (int i = 0, k = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (arr1[i] == arr2[j]) {
                    intersection[k] = arr1[i];
                    k++;
                }
            }
        }
        for (int i = 0; i < common; i++) printf("%d ", intersection[i]);
    }
}