#include <stdio.h>

int occurrence_of_word(char str[], char word[]);
int cmp_str_word (char word[], char str[], int first_i_word_str, int last_i_word_str);

int main (void) {
    char str[128];
    scanf("%[^\n]", str);

    char word[32];
    scanf("%s", word);

    int occurrence = occurrence_of_word(str, word);

    printf("%d", occurrence);
}

int occurrence_of_word(char str[], char word[]) {
    int occurrence = 0, word_start = 0, i = 0;
    for (; str[i] != 0; i++) {
        if (str[i] == ' ') {
            if (cmp_str_word(word, str, word_start, i)) occurrence++;
            word_start = i + 1;
        }
    }
    if (cmp_str_word(word, str, word_start, i)) occurrence++;
    return occurrence;
}

int cmp_str_word (char word[], char str[], int beginning_word, int end_word) {
    int flag = 1;
    for (int j = 0, k = beginning_word; word[j] != 0 && k < end_word; j++, k++) {
        if (str[k] != word[j]) flag = 0;
    }
    return flag;
}