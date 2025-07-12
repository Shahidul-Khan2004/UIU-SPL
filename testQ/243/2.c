#include <stdio.h>

struct student {
    char name[64];
    int id;
    float marks[5];
    float avg;
};

int n = 0;

void add (struct student s[]) 
{
    scanf(" %[^\n]", s[n].name);
    scanf("%d", &s[n].id);
    for (int i = 0; i < 5; i++) scanf("%f", &s[n].marks[i]);
    float sum = 0;
    for (int i = 0; i < 5; i++) sum += s[n].marks[i];
    s[n].avg = sum / 5.0;
    n++;
}

void display (struct student s[]) 
{
    for (int i = 0; i < n; i++) {
        printf("%s\n%d\n", s[i].name, s[i].id);
        for (int j = 0; j < 5; j++) printf("%.2f ", s[i].marks[j]);
        printf("\n%.2f\n", s[i].avg);
    }
}

void top (struct student s[]) 
{
    int top = 0, highest_avg = s[0].avg;
    for (int i = 1; i < n; i++) {
        if (s[n].avg > highest_avg) {
            highest_avg = s[n].avg;
            top = i;
        }
    }
    printf("%s\n%d\n", s[top].name, s[top].id);
    for (int i = 0; i < 5; i++) printf("%.2f ", s[top].marks[i]);
    printf("\n%.2f\n", s[top].avg);
}

void failing (struct student s[])
{
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (s[i].marks[j] < 40) {
                count++;
            }
        }
        if (count > 0) {
            printf("%s\n%d\n", s[i].name, s[i].id);
            for (int j = 0; j < 5; j++) printf("%.2f ", s[i].marks[j]);
            printf("\n%f\n%d\n", s[i].avg, count);
        }
    }
}

void main () {
    struct student s[100];
    int choice;
    while (1) {
        scanf("%d", &choice);
        if (choice == 1) add(s);
        else if (choice == 2) display(s);
        else if(choice == 3) top(s);
        else if (choice == 4) failing(s);
        else if (choice == 5) return;
        else printf("invalid choice\n");
    }
}