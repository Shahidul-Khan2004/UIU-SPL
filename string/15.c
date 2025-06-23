#include <stdio.h>

void reverse_string(char str[], int start, int len);
void reverse_words(char str[]);

int main (void) {
    char str[128];
    scanf("%[^\n]", str);

    int len = 0;
    while (str[len] != 0) len++;
    reverse_string(str, 0, len);

    reverse_words(str);

    printf("%s", str);
}

void reverse_string(char str[], int start, int len) {
    for (int i = start, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverse_words(char str[]) {
    int word_start = 0, i = 0;
    for (; str[i] != 0; i++) {
        if (str[i] == ' ') {
            reverse_string(str, word_start, i);
            word_start = i + 1;
        }
    }
    reverse_string(str, word_start, i);
}