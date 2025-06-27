#include <stdio.h>

int number_of_words(char str[]);
int nth_word_length(char str[], int n);
int is_prime(int number);
int is_spell(char str[]);

int main (void) {
    char str[64];
    scanf("%[^\n]", str);
    if (is_spell(str)) printf("Yes");
    else printf("No");
}

int number_of_words(char str[]) {
    int count = 1;
    for (int i = 0; str[i] != 0; i++) {
        if(str[i] == ' ') count++;
    }
    return count;
}

int nth_word_length(char str[], int n) {
    int x = number_of_words(str);
    int start_index[x], end_index[x];
    for(int i = 0; i < x; i++) { start_index[i] = 0; end_index[i] = 0; }
    int i = 0, j = 0;
    for(; str[i] != 0; i++) {
        if (str[i] == ' ') {
            start_index[j + 1] = i + 1;
            end_index[j] = i;
            j++;
        }
    }
    end_index[j] = i;
    int len = 0;
    for (int i = start_index[n - 1]; i < end_index[n - 1]; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) len++;
    }
    return len;
}
int is_prime(int number) {
    int flag = 1;
    for (int i = 2; i < number / 2; i++) {
        if (number % i == 0) flag = 0;
    }
    return flag;
}
int is_spell(char str[]) {
    int word_count = number_of_words(str);
    for (int i = 1; i <= word_count; i++) {
        if (nth_word_length(str, i) > 9) return 0;
    }
    int concatenated_len = 0;
    for (int i = 1; i <= word_count; i++) {
        concatenated_len *= 10;
        concatenated_len += nth_word_length(str, i);
    }
    if (is_prime(concatenated_len)) return 1;
    else return 0;
}