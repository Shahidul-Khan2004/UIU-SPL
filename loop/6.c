#include <stdio.h>

int main (void) {
    int num, n, guess, flag = 0;
    scanf("%d %d", &num, &n);
    for (int i = n; i > 0; i--)
    {
        scanf("%d", &guess);
        if(guess == num) {
            printf("Right, Player-1 wins!");
            flag = 1;
            break;
        }
        else {
            printf("Wrong, %d Choice(s) Left!\n", i - 1);
        }
    }
    if (flag == 0) printf("Right, Player-2 wins!");
}