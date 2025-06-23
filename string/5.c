#include <stdio.h>

int main (void) {
    char str[64];
    scanf("%[^\n]", str);

    int len = 0;
    while (str[len] != 0) len++;

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);
}