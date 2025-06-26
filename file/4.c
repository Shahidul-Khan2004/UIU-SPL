#include <stdio.h>

int main (void) {
    FILE *fp;
    fp = fopen("sample.txt", "r");
    char c = 0;
    int count = 1;
    while(fscanf(fp, "%c", &c) != EOF) {
        if (c == '\n') count++;
    }
    fclose(fp);
    printf("%d", count);
}