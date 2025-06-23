#include<stdio.h>
int digit_add(char str[]);

int main()
{
    char str[128];
    scanf("%[^\n]", str);

    printf("%d", digit_add(str));
}

int digit_add(char str[])
{
    int digit = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] >= '0' && str[i] <= '9') digit += (str[i] - '0');
    }
    return digit;
}