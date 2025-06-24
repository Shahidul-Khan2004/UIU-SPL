#include <stdio.h>
#include <string.h>

int myFunc(char str1[], char str2[]);

int main (void) {
    char s1[64], s2[64];
    scanf("%[^\n] %[^\n]", s1, s2);

    int lib = strcmp(s1, s2);
    if (lib > 0) printf("s1 greater\n");
    else if (lib < 0) printf("s2 greater\n");
    else printf("equal\n");

    int Func = myFunc(s1, s2);
    if (Func > 0) printf("s1 greater");
    else if (Func < 0) printf("s2 greater");
    else printf("equal");
}

int myFunc(char str1[], char str2[]) {
    int i = 0;
    for (; str1[i] != 0 && str2[i] != 0; i++) {
        if(str1[i] != str2[i]) return str1[i] - str2[i];
    }
    return str1[i] - str2[i];
}