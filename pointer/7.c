#include <stdio.h>
 
int main (void) {
    int n;
    int *pn = &n;
    scanf("%d", pn);
    int arr[*pn];
    int *parr = arr;
    for (int i = 0; i < *pn; i++) scanf("%d", parr + i);
    int sum = 0;
    for (int i = 0; i < *pn; i++) sum += *(parr + i);
    printf("%d", sum);
}