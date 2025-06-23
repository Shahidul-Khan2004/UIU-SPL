#include<stdio.h>
void toggle_case(char str[]);

int main()
{
    char str[128];
    scanf("%[^\n]", str);

    toggle_case(str);
    printf("%s\n", str);

}

void toggle_case(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ( str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    }
}