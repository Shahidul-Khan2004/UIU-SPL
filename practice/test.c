#include<stdio.h>  
struct rectangle {
    int height;
    int breadth;
};

int main (void) {
    struct rectangle r[3];
    struct rectangle *p = r;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &(p + i)->height);
        scanf("%d", &(p + i)->breadth);
    }
    int area_max = 0;
    for (int i = 0; i < 3; i++) {
        int area = (p + i)->height * (p + i)->breadth;
        if (area > area_max) area_max = area;
    }
    printf("%d ", area_max);
}