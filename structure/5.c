#include <stdio.h>

struct student {
    char name[32];
    char id[16];
    float cgpa;
};
int main (void) {
    struct student s1 = {"Unknown", "N/A", 0.0};
    s1 = (struct student){"Md. Shahidul Islam Khan", "0112430301", 4.0};
    printf("%s %s %.2f", s1.name, s1.id, s1.cgpa);
}