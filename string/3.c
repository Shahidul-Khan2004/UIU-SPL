#include <stdio.h>

int main (void) {
    char str[64];
    scanf("%[^\n]", str);

    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        switch (str[i]) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
                break;
        }
        i++;
    }
    printf("%d", count);
}