#include <stdio.h>

void take_input(char str[]);
int extract_words(char sentence[], char words[][20]);
int is_magic_word (char word[]);
void find_magic_word(char words[][20], int count);

int main (void) {
    char str[64];
    char words[64][20];
    take_input(str);
    int word_count = extract_words(str, words);
    //    for (int i = 0; i < word_count; i++) {
    //        printf("%s ", words[i]);
    //        printf("%d ", is_magic_word(words[i]));
    //    }
    find_magic_word(words, word_count);
}

void take_input(char str[]) {
    scanf("%[^\n]", str);
}

int extract_words(char sentence[], char words[][20]) {
     int word_count = 1;
     int i = 0, j = 0, k = 0;
     for (; sentence[i] != 0; i++, k++) {
        if (sentence[i] == ' ') {
            words[j][k] = 0;
            i++; j++; k = 0;
        }
        words[j][k] = sentence[i];
     }
     words[j][k] = 0;
     for (int i = 0; sentence[i] != 0; i++) {
        if (sentence[i] == ' ') word_count++;
     }
     return word_count;
}

int is_magic_word (char word[]) {
    int flag = 1;
    int i = 0;
    for (; word[i] != 0; i++) {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&
            word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U')
                flag = 0;
    }
    if (i % 2 == 1) {
        flag = 0;
    }
    return flag;
}

void find_magic_word(char words[][20], int count) {
    int flag = 0;
    for (int i = 0; i < count; i++) {
        if(is_magic_word(words[i])) flag = 1;
    }
    if (flag == 1) printf("Magic word found!");
    else printf("Magic word not found!");
}
