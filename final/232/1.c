#include <stdio.h>
#include <math.h>

int is_perfect_square(int x);
int are_digits_non_decreasing(int x);
void find_perfect_square_sorcerers(int start, int end);

int main (void) {
    int start, end;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);
    find_perfect_square_sorcerers(start, end);
}

int is_perfect_square(int x) {
    int root = sqrt(x);
    int num = root * root;
    if (num == x) return 1;
    else return 0;
}

int are_digits_non_decreasing(int x) {
    while (x != 0) {
        int rem1 = x % 10;
        x /= 10;
        int rem2 = x % 10;
        if(rem1 < rem2) return 0;
    }
    return 1;
}

void find_perfect_square_sorcerers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_perfect_square(i) && are_digits_non_decreasing(i)) printf("%d\n", i);
    }
}