#include <stdio.h>

int main (void) {
    FILE *fp;
    fp = fopen("sample.txt", "a");
    fprintf(fp, "4 Shahidul\n");
    fprintf(fp, "5 Radiyah");
    fclose(fp);
}