#include <stdio.h>

void remove_duplicate (char str[]);
void delete_letter (int index, char str[], int len);

int main (void) {
    char str[128];
    scanf("%[^\n]", str);

    remove_duplicate(str);

    printf("%s", str);
}

void remove_duplicate (char str[]) {
    int len = 0;
    while(str[len] != 0) len++;

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                delete_letter(j, str, len);
                j--;
                len--;
            }
        }
    }

    str[len] = 0;
}

void delete_letter (int index, char str[], int len) {
    for (int i = index; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
}