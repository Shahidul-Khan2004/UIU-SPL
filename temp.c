#include <stdio.h>
#include <math.h>

int main (void) {
    // int a[3] = {1, 2, 3};

    // int size;

    // scanf("%d", &size);

    // int b[size];
    // for (int i = 0; i < size; i++) scanf("%d", &b[i]);
    // for (int i = 0; i < size; i++) printf("%d", b[i]);

    // int sum;
    // for (int i = 0; i < size; i++) sum += b[i];
    // float avg = (float) sum / size;

    // int max = b[0];
    // for (int i = 1; i < size; i++) {
    //     if (b[i] > max) max = b[i];
    // }
    
    // int min = b[0];
    // for (int i = 1; i < size; i++) {
    //     if (b[i] < min) min = b[i];
    // }

    // float sumf, variance;
    // for (int i = 1; i < size; i++) {
    //     sumf += (b[i] - avg) * (b[i] - avg);
    // }
    // variance = sumf / size;
    // float std_daviation = sqrt(variance);
    
    /*int arr[10] = {1, 2, 3, 4, 5, 60, 7, 8, 90, 9};
    int largest, second_largest;
    largest = arr[0];
    int index = 0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            index = i;
        }
    }
    for (int i = index; i < 10 - 1; i++) {
        arr[i] = arr[i + 1];
    }
    second_largest = arr[0];
    for (int i = 1; i < 10 - 1; i++) {
        if (arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    printf("%d", second_largest);*/
    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    // int index;
    // scanf("%d", &index);
    // for(int i = index; i < n - 1; i++) arr[i] = arr[i + 1];
    // for (int i = 0; i < n - 1; i++) printf("%d ", arr[i]);

    // int arr[n + 1];
    // for (int i = 0; i < n; i++) scanf("%d", arr[i]);
    // int index, value;
    // scanf("%d", &index);
    // scanf("%d", &value);
    // for (int i = n - 1; i >= index; i--) {
    //     arr[i + 1] = arr[i];
    // }
    // arr[index] = value;
    // for (int i = 0; i < 6; i++) printf("%d ", arr[i]);

    // int n;
    // do {
    //     scanf("%d", &n);
    // } while (n % 2 == 0 || n < 5);

    // for (int i = 1; i <= n / 2 + 1; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         (j == 1 || j == n || j == i || i + j == n + 1) ? printf("*") : printf(" ");
    //     }
    //     printf("\n");
    // }
    // for (int i = n / 2 + 2; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         (j == 1 || j == n) ? printf("*") : printf(" ");
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (i == 0 || i ==  n / 2 || i == n - 1) printf("*");
    //         else if (i < n / 2) {
    //             if (j == n - 1) printf("*");
    //             else printf(" ");
    //         }
    //         else {
    //             if (j == 0) printf("*");
    //         }
    //     } 

    //     printf("\n");
    // }
}