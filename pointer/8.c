#include <stdio.h>
 
int main (void) {
    int n;
    int *pn = &n;
    scanf("%d", pn);
    int arr[*pn];
    int *parr = arr;
    for (int i = 0; i < *pn; i++) scanf("%d", parr + i);
    for (int i = *pn - 1; i >= 0; i--) printf("%d ", *(parr + i));
}