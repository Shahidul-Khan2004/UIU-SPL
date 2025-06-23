#include<stdio.h>

void convert_lowercase(char str[]);
int main()
{
    char str[128];
    scanf("%[^\n]", str);

    convert_lowercase(str);
    //printf("%s\n", str);
    puts(str);

}

void convert_lowercase(char str[])
{
    for(int i = 0; str[i] != 0; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    }
}