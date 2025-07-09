#include <stdio.h>

int main (void) {
    FILE *fp;
    fp = fopen("in.txt", "r");
    if (fp == 0) printf("Couldn't open in.txt");
    int max = -9999999;
    int num;
    while (fscanf(fp, "%d", &num) == 1) {
        if (num > max) max = num;
    }
    // while (fscanf(fp, "%d", &num) != EOF) {
    //     if (num > max) max = num;
    //     fgetc(fp);
    // }
    /*while (fscanf(fp, " %[^\n]", str) == 1) {
    fgetc(fp); // Consume the newline character
    count++;
    }*/
    fclose(fp);
    FILE *fp1;
    fp1 = fopen("out.txt", "w");
    if (fp1 == 0) printf("couldn't open out.txt");
    fprintf(fp1, "%d", max);
    fclose(fp1);
}