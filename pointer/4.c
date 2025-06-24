#include <stdio.h>
//#include <stdlib.h>

int main (void) {
    char str[64];
    char *s = str;
    //char *s = (char *) malloc(64 * sizeof(char));
    scanf("%[^\n]", s);
    int len = 0;
    while (*(s + len) != 0) len++;
    //s = realloc(s, len + 1);
    printf("%d", len);
    //free(s);
}