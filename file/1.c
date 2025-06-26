#include <stdio.h>

int main (void) {
    FILE *fp;
    fp = fopen("sample.txt", "w");
    fprintf(fp, "1 Zahid\n2 Tanvir\n3 Akif");
    fclose(fp);
}