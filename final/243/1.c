#include <stdio.h>

void removeAllDuplicates(char str[]);
int getSize(char str[]);
void checkPalindrome(char *str);

int main (void) {
    char str[64];
    scanf("%[^\n]", str);
    removeAllDuplicates(str);
    printf("%s\n", str);
    checkPalindrome(str);
}

void removeAllDuplicates(char str[]) {
    int len = getSize(str);
    for (int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                for (int k = j; k < len; k++) str[k] = str[k + 1];
                len--;
                i--;
            }
        }
    }
}

int getSize(char str[]) {
    int len = 0;
    while(str[len] != 0) len++;
    return len;
}

void checkPalindrome(char *str) {
    int len = getSize(str);
    int palindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) palindrome = 0;
    }
    if (palindrome) printf("Palindrome");
    else printf("Not a Palindrome");
}