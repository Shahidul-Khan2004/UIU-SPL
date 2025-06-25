#include <stdio.h>

int palindrome(char str[], int start, int end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return palindrome(str, start + 1, end - 1);
}

int main (void) {
    char s[64];
    scanf("%[^\n]", s);
    int len = 0;
    while (s[len] != 0) len++;
    if(palindrome(s, 0, len - 1)) printf("Palindrome");
    else printf("Oh hell nah!");
}