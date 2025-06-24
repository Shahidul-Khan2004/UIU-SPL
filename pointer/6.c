#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char *s = (char *) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    int len = 0;
    while(*(s + len) != 0) len++;
    s = realloc(s, len + 1);
    int vowel = 0;
    int consonant = 0;
    for (int i = 0; *(s + i) != 0; i++) {
        switch (*(s + i)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
            vowel++;
            break;
            case ' ':
            break;
            default:
            consonant++;
        }
    }
    printf("vowel: %d, Consonant: %d", vowel, consonant);
}