#include <stdio.h>

int main (void) {
    char str[128];
    int n;
    scanf("%[^\n]", str);
    scanf("%d", &n);
    for (int i = n - 1; str[i] != 0; i += n) str[i] = 'Z';
    printf("%s", str);
}