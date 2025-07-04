#include <stdio.h>

struct program {
    char name [60];
    int total_memory;
    int used_memory;
};

int all_caps(char *input);

int main (void) {
    int n;
    scanf("%d", &n);
    struct program p[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", p[i].name);
        scanf("%d", &p[i].total_memory);
        scanf("%d", &p[i].used_memory);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].used_memory >= p[i].total_memory && all_caps(p[i].name)) {
            count++;
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < n; i++) {
        if (p[i].used_memory >= p[i].total_memory && all_caps(p[i].name)) {
            printf("%s\n", p[i].name);
        }
    }
}

int all_caps(char *input) {
    int flag = 1;
    for (int i = 0; input[i] != 0; i++) {
        if (!(input[i] >= 'A' && input[i] <= 'Z')) flag = 0;
    }
    return flag;
}