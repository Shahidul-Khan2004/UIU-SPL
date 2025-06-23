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
    int occurrence = 0, first_index_after_space = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == ' ') {
            if (cmp_str_word(word, str, first_index_after_space, i)) occurrence++;
            first_index_after_space = i + 1;
        }
    }
    return occurrence;
}

int cmp_str_word (char word[], char str[], int first_i_word_str, int last_i_word_str) {
    int flag = 1;
    for (int j = 0, k = first_i_word_str; word[j] != 0 && k < last_i_word_str; j++, k++) {
        if (str[k] != word[j]) flag = 0;
    }
    return flag;
}