#include <stdio.h>

int * multi_by_2(int *arr) {
    for(int i = 0; i < 5; i++) arr[i] *= 2;
    return arr;
}

int main (void) {
    int arr[] = {1, 2, 3, 4, 5};
    int *arr1 = multi_by_2(arr);
    for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);
}