#include <stdio.h>

int main (void) {
    char str[64];
    scanf(" %[^\n]", str);
    char sub[32];
    scanf(" %[^\n]", sub);
    int len = 0;
    while (sub[len] != 0) len++;

    for (int i = 0; str[i] != 0; i++) {
        int count = 0, k = i;
        for (int j = 0; sub[j] != 0; j++, k++) {
            if(str[k] == sub[j]) count++;
        }
        if (count == len && (str[k] == ' ' || str[k] == 0 || str[k] == '.')) printf("Found");
    }
}