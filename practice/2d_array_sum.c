#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        scanf("%d", &n);
    } while (n % 2 == 0 && n < 5);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);

        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if (i == 0) {
                if (j % 2 == 0) sum += arr[i][j];
            }
            else if (i == n - 1) {
                if (j > 0 && j < n - 1) sum += arr[i][j];
            }
            else if (i == n / 2) {
                if (j % 2 != 0) sum += arr[i][j];
            }
            else {
                if (j == n / 2 - 1 || j == n / 2 + 1) sum += arr[i][j];
            }
        }
    }
    printf("S = %d\n", sum);
}
