#include<stdio.h>
int length_function(char str[]);
int IsPalindrome(char str[]);

int main()
{
    char str[128];
    scanf("%[^\n]", str);

    if ( IsPalindrome(str) ) printf("YES");
    else printf("NO");


}
int length_function(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != 0; i++) len++;
    return len;
}

int IsPalindrome(char str[])
{
    int len = length_function(str);

    int same = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        //int temp = str[i];
        if (str[i] != str[j]) same = 0;
        //str[j] = temp;
    }
    return same;
}