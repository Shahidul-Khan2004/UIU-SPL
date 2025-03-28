#include <stdio.h> 

int main (void) {
    int n, count = 0;
    scanf("%d", &n);
    char str[n];
    for (int i = 0; i < n; i++) {
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||
            str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || 
            str[i] == 'U' || str[i] == 'u') count++;
    }
    printf("Count: %d", count);
}