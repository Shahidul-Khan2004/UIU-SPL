#include <stdio.h>

struct student {
    char name[128];
    int age; float height;
    float weight; float BMI;
};

int main (void) {
    struct student p[100];
    for (int i = 0; i < 3; i++) {
        scanf(" %[^\n]", p[i].name);
        scanf("%d", &p[i].age);
        scanf("%f", &p[i].height);
        scanf("%f", &p[i].weight);
        p[i].BMI = p[i].weight / p[i].height;
    }
    int lowest_age = p[0].age;
    int low_i = 0;
    for (int i = 0; i < 3; i++) {
        if (p[i].age < lowest_age) {
            lowest_age = p[i].age;
            low_i = i;
        }
    }
    printf("%s\n%d\n%f\n%f\n%f\n", p[low_i].name, p[low_i].age, p[low_i].height, p[low_i].weight, p[low_i].BMI);
}