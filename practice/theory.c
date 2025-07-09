#include <stdio.h> 

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (void) {
    int A[5];
    int *aPtr = A;
    for (int i = 0; i < 5; i++) scanf("%d", aPtr + i);
    swap(&A[2], &A[3]);
    for (int i = 0; i < 5; i++) printf("%d ", *(aPtr + i));
}