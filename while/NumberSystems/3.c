#include <stdio.h>
#include <math.h>

int main (void) {
    int bin, num = 0;
    scanf("%d", &bin);
    int i = 0;
    while (bin != 0)
    {
        num += (bin % 10) * pow(2, i);
        bin /= 10;
        i++;
    }
    printf("%d", num);
}