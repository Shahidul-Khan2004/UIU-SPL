#include <stdio.h>

void removeAllDuplicates (char str[]) 
{
    for (int i = 0; str[i] != 0; i++) {
        for (int j = i + 1; str[j] != 0; j++) {
            if (str[i] == str[j]) {
                for (int k = j; str[k] != 0; k++) {
                    str[k] = str[k + 1];
                }
                j--;
            }
        }
    }
}

int getSize (char str[]) 
{
    int len = 0;
    while (str[len] != 0) len++;
    return len;
}

void checkPlindrome (char *str) 
{
    for (int i = 0, j = getSize(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("Not Palindrome!");
            return;
        }
    }
    printf("Panlindrome!");
}

int main (void) {
    char str[64];
    scanf("%[^\n]", str);
    removeAllDuplicates(str);
    checkPlindrome(str);
}