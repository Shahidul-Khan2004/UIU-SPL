#include <stdio.h>

void sort(char str[]);

int main (void) {
    char str[64];
    scanf("%[^\n]", str);
    sort(str);
    printf("%s", str);
}

void sort(char str[]) {
    int len = 0;
    while (str[len] != 0) len++;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str [j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}