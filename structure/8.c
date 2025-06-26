#include <stdio.h>

struct student {
    char name[32];
    char id[16];
    float cgpa;
};
int main (void) {
    struct student s1 = {"Unknown", "N/A", 0.0};
    struct student s2 = {"Unknown", "N/A", 0.0};
    scanf("%[^\n] %[^\n] %f", s1.name, s1.id, &s1.cgpa);
    scanf(" %[^\n] %[^\n] %f", s2.name, s2.id, &s2.cgpa);
    if(s1.cgpa > s2.cgpa) printf("%s\n%s\n%.2f\n", s1.name, s1.id, s1.cgpa);
    else printf("%s\n%s\n%.2f", s2.name, s2.id, s2.cgpa);
}