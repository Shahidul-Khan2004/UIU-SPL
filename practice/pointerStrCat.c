#include <stdio.h>

int main (void) {
    int len = 0, i = 0;
    char str1[64], str2[64];
    scanf(" %s %s", str1, str2);
    while(*(str1 + len) != 0) len++;
    while(*(str2 + i) != 0) {
        *(str1 + len + i) = *(str2 + i);
        i++;
    }
    *(str1 + len + i) = *(str2 + i);
}