#include <stdio.h>

struct card {
    char name[60];
    int stage;
    int HP;
};

int ends_with(char *input, char letter);

int main (void) {
    int n;
    scanf("%d", &n);
    struct card c[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", c[i].name);
        scanf("%d", &c[i].stage);
        scanf("%d", &c[i].HP);
    }

    int total = 0;

    for (int i = 0; i < n; i++) {
        total += 50;
        if(ends_with(c[i].name, 'X')) total += 200;
        total += c[i].HP;
        if(c[i].stage == 1) total+=30;
        else if(c[i].stage == 2) total+=80;
    }
    printf("%d", total);
}

int ends_with(char *input, char letter) {
    int len = 0;
    while (input[len] != 0) len++;
    if (input[len - 1] == letter) return 1;
    else return 0;
}