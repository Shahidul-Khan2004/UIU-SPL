#include <stdio.h>

int main (void) {
    int n, *p = &n;
    scanf("%d", p);
    int arr[*p];
    int *index = arr;
    for (int i = 0; i < *p; i++) scanf("%d", index + i);
    for (int i = 0; i < *p; i++) printf("%d ", *(index + i));
}