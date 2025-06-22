#include <stdio.h>

int main (void) {
    char str1[64];
    char str2[64];

    scanf("%[^\n] %[^\n]", str1, str2);

    int len_str1 = 0;

    while (str1[len_str1] != 0) len_str1++;

    int i = 0;
    for (; str2[i] != 0; i++) {
        str1[len_str1 + i] = str2[i];
    }
    str1[len_str1 + i] = 0;

    printf("%s", str1);
}