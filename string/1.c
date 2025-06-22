#include <stdio.h>

int main (void) {
    char str[64];
    scanf("%[a-z A-Z]", str);
    int len = 0;
    for (; str[len] != 0; len++) {}
    printf("%d", len);
}