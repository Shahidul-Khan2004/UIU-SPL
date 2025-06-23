#include <stdio.h>

int highest_duplicate (char str[]);
int max_index (int arr[], int size);
void upper(char str[]);

int main (void) {
    char str[128];
    scanf("%[^\n]", str);
    upper(str);
    char most_occurring = str[highest_duplicate(str)];
    printf("%c (or %c)", str[highest_duplicate(str)], str[highest_duplicate(str)] + 32);
}

int highest_duplicate (char str[]) {
    int len = 0;
    while(str[len] != 0) len++;
    
    int count[len];
    for (int i = 0; i < len; i++) count[i] = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count[i]++;
            }
        }
    }
    return max_index(count, len);
}

int max_index (int arr[], int size) {
    int max = arr[0], max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

void upper(char str[]) {
    int len = 0;
    while(str[len] != 0) len++;

    for (int i = 0; i < len; i++) {
        if (str[i] > 'a' && str[i] < 'z') str[i] -= 32;
    }
}