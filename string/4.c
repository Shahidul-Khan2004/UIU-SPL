#include <stdio.h>

int main (void) {
    char str[64];
    scanf("%[^\n]", str);

    int i = 0;
    int count = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ') count++;
        i++;
    }
    printf("%d", count);
}