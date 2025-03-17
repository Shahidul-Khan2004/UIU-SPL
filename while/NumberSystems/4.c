#include <stdio.h>
#include <math.h>

int main (void) {
    int oct, num = 0;
    scanf("%d", &oct);
    int i = 0;
    while (oct != 0)
    {
        num += (oct % 10) * pow(8, i);
        oct /= 10;
        i++;
    }
    printf("%d", num);
}