#include <stdio.h>

struct student {
    char name[32];
    char id[16];
    float cgpa;
};
int main (void) {
    struct student s1 = {"Unknown", "N/A", 0.0};
    scanf("%[^\n] %[^\n] %f", s1.name, s1.id, &s1.cgpa);
    printf("%s %s %.2f", s1.name, s1.id, s1.cgpa);
}