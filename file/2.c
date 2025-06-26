#include <stdio.h>

struct hudai{
    int n;
    char name[16];
};

int main (void) {
    FILE *fp;
    fp = fopen("sample.txt", "r");
    struct hudai alu[3];
    for (int i = 0; i < 3; i++) {
        fscanf(fp, "%d", alu[i].n);
        fscanf(fp, "%s", alu[i].name);
    }
    fclose(fp);
}